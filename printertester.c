#define TERMINAL0    "/dev/ttyUSB0"
#define TERMINAL1    "/dev/ttyUSB1"

#include "printer_commands.h"
#include <errno.h>
#include <fcntl.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
int baud_rate = B115200;





int maskbit(unsigned char mask,unsigned char *value) {
    printf("and: %d mask is: %d value is: %d\n", mask & *value, mask, *value);
    unsigned char temp = mask & *value ;
    if (temp == mask) {
        return 1;
    } 
    return 0;
}

void print_empty_space(int n_spaces, int fd){
    for (int i = 0; i < n_spaces; i++)
    {
        write(fd, "\n", 1);
    }
    tcdrain(fd);
    
}
void print_logo(int position,int fd) {
    switch (position)
    {
    case 0:
        write(fd, TEXT_ALIGNMENT_CENTER, 4);
        /* code */
        break;
    
    default:
        break;
    }
    write(fd, LOGO_BIG, 5685);
    ///write(fd, LOGO_IMG, 909);
    tcdrain(fd);
}
void cut_paper(int fd) {
    write(fd, PARTIAL_CUT_ONE, strlen(PARTIAL_CUT_ONE));
    tcdrain(fd);
}
void print_barcode_timestamp(int height, int width, int fd, int HRC) {
    char barcode_height[3] = "\x1D\x68\x10";
    int command_size = 3;
    barcode_height[2] = height;

    char barcode_width[3] = "\x1D\x77\x02";
    // range 1..6
    barcode_width[2] = width;
    char barcode_HRCpos[3] = "\x1D\x48\x01";
    //range 0..3
    barcode_HRCpos[2] = HRC;
    char barcode_content[14] = "\x1D\x6B\x05\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x00";
    char content[64];  

    //variável do tipo time_t para armazenar o tempo em segundos  
    time_t segundos;

    //obtendo o tempo em segundos  
    time(&segundos);   
    sprintf(content, "%ld", segundos);
    printf("%s\n", content);
    for (int i = 3; i < 13; i++)
    {
        barcode_content[i] = content[i-3];
    }
    int wlen;

    wlen = write(fd, TEXT_ALIGNMENT_CENTER, 4);
    wlen = write(fd, barcode_height, command_size);
    wlen = write(fd, barcode_width, command_size);
    wlen = write(fd, barcode_HRCpos, command_size);
    wlen = write(fd, barcode_content, 14);
    if (wlen != 16) {
        printf("Error from write: %d, %d\n", wlen, errno);
    }
    tcdrain(fd);
}

int set_interface_attribs(int fd, int speed)
{
    struct termios tty;

    if (tcgetattr(fd, &tty) < 0) {
        printf("Error from tcgetattr: %s\n", strerror(errno));
        return -1;
    }

    cfsetospeed(&tty, (speed_t)speed);
    cfsetispeed(&tty, (speed_t)speed);

    tty.c_cflag |= (CLOCAL | CREAD);    /* ignore modem controls */
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8;         /* 8-bit characters */
    tty.c_cflag &= ~PARENB;     /* no parity bit */
    tty.c_cflag &= ~CSTOPB;     /* only need 1 stop bit */
    tty.c_cflag &= ~CRTSCTS;    /* no hardware flowcontrol */
    //tty.c_cflag |= CRTSCTS;    /* yes hardware flowcontrol */

    /* setup for non-canonical mode */
    tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL | IXON);
    tty.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);
    tty.c_oflag &= ~OPOST;

    //canonical
    // tty.c_iflag |= IGNPAR | IGNCR;
    // tty.c_iflag &= ~(IXON | IXOFF | IXANY);
    // tty.c_lflag |= ICANON;
    // tty.c_oflag &= ~OPOST;

    //tty.c_cflag |= IXANY;    /* SOFWTARE flowcontrol */
    /* fetch bytes as they become available */
    tty.c_cc[VMIN] = 0;
    tty.c_cc[VTIME] = 5;

    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        printf("Error from tcsetattr: %s\n", strerror(errno));
        return -1;
    }
    return 0;
}

void set_mincount(int fd, int mcount)
{
    struct termios tty;

    if (tcgetattr(fd, &tty) < 0) {
        printf("Error tcgetattr: %s\n", strerror(errno));
        return;
    }

    tty.c_cc[VMIN] = mcount ? 1 : 0;
    tty.c_cc[VTIME] = 5;        /* half second timer */

    if (tcsetattr(fd, TCSANOW, &tty) < 0)
        printf("Error tcsetattr: %s\n", strerror(errno));
}


int main()
{
    
    char *portname0 = TERMINAL0;
    char *portname1 = TERMINAL1;
    int fd;
    int wlen;

    fd = open(portname0, O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0) {
        printf("Error opening %s: %s\n", portname0, strerror(errno));
        fd = open(portname1, O_RDWR | O_NOCTTY | O_SYNC);
        if (fd < 0) {
            printf("Error opening %s: %s\n", portname1, strerror(errno));
            return -1;
        }
    }
    /*baudrate 115200, 8 bits, no parity, 1 stop bit */
    set_interface_attribs(fd, baud_rate);
    //set_mincount(fd, 0);                /* set to pure timed read */
    int command_size = 0;
    
    /* simple output */
    while (1)
    {
        command_size = 0;
        //printf("enviando comando: %s \n", command);
        int input;
        int maxOptions = 4;
        printf("Select operation\n");
        printf("0 - leave\n");
        printf("1 - Print texto\n");
        printf("2 - impressao de QRcode\n");
        printf("3 - cortar papel\n");
        printf("4 - Transmit realtime status\n");
        printf("5 - impressao de barcode\n");
        printf("6 - impressao de imagem\n");
        printf("7 - Print ticket\n");
        input = getchar();
        input = input - 48;
        printf("input is %d\n", input);
        fflush(stdout);
        switch (input)
        {
        #pragma region
        case 0:
            exit(0);
        #pragma endregion
        #pragma region case1
        case 1:
            command_size = strlen(TEST_PAPER);
            //wlen = write(fd, "\x1b\x40", 2);
            wlen = write(fd, TEST_PAPER_NEW, 8);
            for (size_t i = 0; i < 8; i++)
            {
                /* code */
                printf(" %02x", TEST_PAPER_NEW[i]);
            }
            
            if (wlen != command_size) {
                printf("\nError from write: %d, %d\n", wlen, errno);
            }
            tcdrain(fd);
            break;
        #pragma endregion
        #pragma region case2
        
        case 2:
            //
            printf("Escreva o valor do qrcode: \n");
            char qr_value[256];
            scanf("%s", qr_value);
            int input_size = strlen(qr_value);
            int size = input_size + 3;

            char command[1024] = "\x1d\x28\x6b";
            command[3] = size % 256;
            command[4] = size / 256;
            command[5] = 49;
            command[6] = 80;
            command[7] = 48;


            int actual_size = 8+input_size;
            //strncat(command, teste, len);
            for (int i = 8; i < actual_size; i++)
            {
                command[i] = qr_value[i-8];
            }

            command[actual_size] = 29;
            command[actual_size+1] = 40;
            command[actual_size+2] = 107;
            command[actual_size+3] = 3;
            command[actual_size+4] = 0;
            command[actual_size+5] = 49;
            command[actual_size+6] = 81;
            command[actual_size+7] = 48;


            actual_size += 8;
            for (int i = 0; i < actual_size; i++)
            {
                printf("%x, %c\n", command[i], command[i]);
            }


            int command_lenght = actual_size;



            printf("Digite o tamanho 0-16: ");
            int sizeInput;
            scanf("%d", &sizeInput);
            char *init_qr = INIT_QRCODE;
            init_qr[7] = sizeInput;
            wlen = write(fd, init_qr, 16);
            wlen = write(fd, command, command_lenght);
            //wlen = write(fd, PARTIAL_CUT_ONE, 7);
            //wlen = write(fd, LOGO_IMG, 5000);
            break;
        #pragma endregion
        #pragma region case3
        case 3:
            //
            command_size = strlen(PARTIAL_CUT_ONE);
            wlen = write(fd, PARTIAL_CUT_ONE, command_size);
            if (wlen != command_size) {
                printf("Error from write: %d, %d\n", wlen, errno);
            }
            tcdrain(fd);
            break;
        #pragma endregion
        #pragma region case4
        case 4:
            while (1)
            {
                printf("select n value (1..4): \n");
                //getchar();
                int statusType;
                do
                {
                    statusType = getchar();
                } while (statusType == '\n');
                
                
                printf("sending command: ");
                //statusType = statusType - 48;
                char cmd[4];
                strcpy(cmd, REALTIME_TRASMIT_STATUS_01);
                command_size = strlen(REALTIME_TRASMIT_STATUS_01);
                cmd[2] = statusType - '0';
                for (int i = 0; i < command_size; i++)
                    {
                        printf("0x%02X ", cmd[i]);
                        //cmd[i] = REALTIME_TRASMIT_STATUS_01[i];
                    }
                printf("\n");
                wlen = write(fd, cmd, command_size);
                if (wlen != command_size) {
                    printf("Error from write: %d, %d\n", wlen, errno);
                }
                tcdrain(fd);

                //recive
                do {
                    unsigned char buf[80];
                    int rdlen;
                    unsigned char bufdata;
                    printf("reding from buffer...\n");
                    rdlen = read(fd, buf, sizeof(buf) - 1);
                    printf("recived %d bytes\n", rdlen);
                    if (rdlen > 0) {
                        unsigned char   *p;
                        printf("Read %d:", rdlen);
                        for (p = buf; rdlen-- > 0; p++)
                            bufdata = *p;
                            printf(" 0x%x\n", bufdata);
                            if(statusType == '1') {
                                struct printer_realtime_status1 status;
                                status.cash_drawer = maskbit(CASH_DRAWER_MASK, &bufdata);
                                status.on_off = maskbit(ON_OFF_MASK, &bufdata);
                                status.paper_torn = maskbit(PAPER_TORN_MASK, &bufdata);
                                printf("Recived status cash: %d, on_off: %d paper torn: %d\n", status.cash_drawer, status.on_off, status.paper_torn);
                            } else if( statusType == '2') {

                            }
                        printf("\n");
                        break;
                    } else if (rdlen < 0) {

                        printf("Error from read: %d: %s\n", rdlen, strerror(errno));
                    } else {  /* rdlen == 0 */
                        printf("Timeout from read\n");
                        break;
                    }          
                    /* repeat read to get full message */
                } while (1);
            }
            
        #pragma endregion
        #pragma region case5
        case 5:
            //
            printf("Barcpde\n");
            print_barcode_timestamp(160, 2, fd, 1);
            break;
        #pragma endregion
        #pragma region case6
        case 6:
            //
            printf("\n");
            print_logo(0 ,fd);
            break;
        #pragma endregion
        #pragma region case7
        case 7:
            printf("printing ticket\n");
            struct tm *data_hora_atual_tkt;     
  
            //variável do tipo time_t para armazenar o tempo em segundos  
            time_t segundos_tkt;

            //obtendo o tempo em segundos  
            time(&segundos_tkt);   

            //para converter de segundos para o tempo local  
            //utilizamos a função localtime  
            data_hora_atual_tkt = localtime(&segundos_tkt);
            char ticket_data[128];
            
            sprintf(ticket_data, "Data: %02d/%02d/%04d %02d:%02d:%02d\n", data_hora_atual_tkt->tm_mday, data_hora_atual_tkt->tm_mon+1, data_hora_atual_tkt->tm_year+1900,data_hora_atual_tkt->tm_hour, data_hora_atual_tkt->tm_min, data_hora_atual_tkt->tm_sec);
            print_logo(0, fd);
            print_empty_space(2, fd);
            wlen = write(fd, ticket, 30);
            print_empty_space(1, fd);
            wlen = write(fd, ticket_data, strlen(ticket_data));
            print_empty_space(2, fd);
            print_barcode_timestamp(160, 4, fd, 0);
            print_empty_space(4, fd);
            
            cut_paper(fd);

            

            break;
        #pragma endregion
        
        default:
            printf("Not reckognized\n\n");
            break;
        }
    }
    #pragma region response
    //     int input_size = strlen(input);
    //     int size = input_size + 3;

    //     char command[1024] = "\x1d\x28\x6b";
    //     command[3] = size % 256;
    //     command[4] = size / 256;
    //     command[5] = 49;
    //     command[6] = 80;
    //     command[7] = 48;


    //     int actual_size = 8+input_size;
    //     //strncat(command, teste, len);
    //     for (int i = 8; i < actual_size; i++)
    //     {
    //         command[i] = input[i-8];
    //     }

    //     command[actual_size] = 29;
    //     command[actual_size+1] = 40;
    //     command[actual_size+2] = 107;
    //     command[actual_size+3] = 3;
    //     command[actual_size+4] = 0;
    //     command[actual_size+5] = 49;
    //     command[actual_size+6] = 81;
    //     command[actual_size+7] = 48;

    
    //     actual_size += 8;
    //     for (int i = 0; i < actual_size; i++)
    //     {
    //         printf("%x, %c\n", command[i], command[i]);
    //     }


    //     int command_lenght = actual_size;



    //     printf("Digite o tamanho 0-16: ");
    //     int sizeInput;
    //     scanf("%d", &sizeInput);
    //     char *
    //     init_qr_cmd[7] = sizeInput;
    //     //wlen = write(fd, init_qr_cmd, 16);
    //     //wlen = write(fd, command, command_lenght);
    //     //wlen = write(fd, PARTIAL_CUT_ONE, 7);
    //     //wlen = write(fd, LOGO_IMG, 5000);

    //     printf("%d \n", wlen);
            /* delay for output */
    // }
    

    //wlen = write(fd, command2, command2_lenght);

    /* simple noncanonical input 
    do {
        
        unsigned char buf[80];
        int rdlen;

        rdlen = read(fd, buf, sizeof(buf) - 1);
        if (rdlen > 0) {
#ifdef DISPLAYSTRING
            buf[rdlen] = 0;
            printf("Read %d: \"%s\"\n", rdlen, buf);
#else /* display hex 
            unsigned char   *p;
            printf("Read %d:", rdlen);
            for (p = buf; rdlen-- > 0; p++)
                printf(" 0x%x", *p);
            printf("\n");
#endif
        } else if (rdlen < 0) {

            printf("Error from read: %d: %s\n", rdlen, strerror(errno));
        } else {  /* rdlen == 0 
            printf("Timeout from read\n");
        }          
        /* repeat read to get full message 
    } while (1);*/
    #pragma endregion
}
