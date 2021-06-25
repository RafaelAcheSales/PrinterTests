#define TERMINAL    "/dev/ttyUSB0"

#include <errno.h>
#include <fcntl.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "printer_commands.h"

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

    /* setup for non-canonical mode */
    tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL | IXON);
    tty.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);
    tty.c_oflag &= ~OPOST;

    /* fetch bytes as they become available */
    tty.c_cc[VMIN] = 1;
    tty.c_cc[VTIME] = 1;

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
    char *portname = TERMINAL;
    int fd;
    int wlen;

    char command[1024] = "\x1d\x28\x6b";
    char input[512];
    scanf("%s",input);
    printf("%s\n",input);
    int input_size = strlen(input);
    int size = input_size + 3;
    command[3] = size % 256;
    command[4] = size / 256;
    command[5] = 49;
    command[6] = 80;
    command[7] = 48;


    int actual_size = 8+input_size;
    //strncat(command, teste, len);
    for (int i = 8; i < actual_size; i++)
    {
        command[i] = input[i-8];
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



    fd = open(portname, O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0) {
        printf("Error opening %s: %s\n", portname, strerror(errno));
        return -1;
    }
    /*baudrate 115200, 8 bits, no parity, 1 stop bit */
    set_interface_attribs(fd, B9600);
    //set_mincount(fd, 0);                /* set to pure timed read */

    /* simple output */

    //printf("enviando comando: %s \n", command);
    char init_qr_cmd[16] = "\x1D\x28\x6B\x03\x00\x31\x43\x01\x1D\x28\x6B\x03\x00\x31\x45\x33";
    printf("Digite o tamanho 0-16: ");
    int sizeInput;
    scanf("%d", &sizeInput);
    init_qr_cmd[7] = sizeInput;
    //wlen = write(fd, init_qr_cmd, 16);
    //wlen = write(fd, command, command_lenght);
    //wlen = write(fd, PARTIAL_CUT_ONE, 7);
    wlen = write(fd, LOGO_IMG, 5000);

    printf("%d \n", wlen);
    if (wlen != command_lenght) {
        printf("Error from write: %d, %d\n", wlen, errno);
    }
    tcdrain(fd);    /* delay for output */

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
}