
char *PRINT_LINE_FEED = "\x0a";
char *PRINT_CARRIAGE_RETURN = "\x0d";
char PARTIAL_CUT_ONE[] = "\x1b\x69\n";
char *QR_CODE_MODEL = "\x1d\x28\x6b\x03\x00\x31\x63\x03";
char *QR_CODE_DATA = "\x1d\x28\x6b\x64\x0a\x31\x50\x30\x0a\x0a\x61" ;
char *QR_CODE_PRINT = "\x1d\x28\x6b\x03\x00\x31\x51\x30";
char *TEST_PAPER = "\x12\x54\n";
char *TRANSMIT_STATUS = "\x1d\x72\x01\n";
char *REALTIME_TRASMIT_STATUS_01 = "\x10\x04\x01";
char *REALTIME_TRASMIT_STATUS_02 = "\x10\x04\x02";
char LINE_FEED_INT = (unsigned char ) 10;
char PRINT_DOWNLOADED_IMG[] = "\x1D\x2F\x03";
char *TEST_01 = "\x1d\x28\x6b\x03\x00\x31\x63\x08";
char *TEXT_ALIGNMENT_LEFT = "\x1B\x61\x00";
char *TEXT_ALIGNMENT_CENTER = "\x1B\x61\x01";
char *TEXT_ALIGNMENT_RIGHT = "\x1B\x61\x02";

char CASH_DRAWER_MASK = 1 << 2;
char ON_OFF_MASK = 1 << 3;
char PAPER_TORN_MASK = 1 << 7;
struct printer_realtime_status1
{
    int cash_drawer;
    int on_off;
    int paper_torn;
};


char TEST_02[] = "\x1b\x4d\x01 Fonte01 \n"
                "\x1b\x4d\x02 Fonte02 \n"
                "\x1b\x4d\x03 Fonte03 \n"
                "\x1b\x4d\x04 Fonte04 \n"
                "\x1b\x4d\x01 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n";
                // "\x1b\x4d\x02 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n"
                // "\x1b\x4d\x03 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n"
                // "\x1b\x4d\x04 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n\n\n\n\n\n";
                

char TEST_03[] ="\x1b\x40"
                "\x1d\x28\x6b\x03\x00\x31\x43\x03"
                "\x1d\x28\x6b\x03\x00\x31\x45\x30"
                "\x1d\x28\x6b\x06\x00\x31\x50\x30\x41\x42\x43";
                // "\x1b\x61\x01"
                // "\x1d\x28\x6b\x03\x00\x31\x52\x30"
                // "\x1d\x28\x6b\x03\x00\x31\x51\x30";
                
char TEST_04[] = "\x1b\x40\x1d\x28\x6b\x03\x00\x31\x43\x03\x1d\x28\x6b\x03\x00\x31\x45\x30\x1d\x28\x6b\x06\x00\x31\x50\x30\x65\x66\x43\x1b\x61\x01\x1d\x28\x6b\x03\x00\x31\x52\x30\x1d\x28\x6b\x03\x00\x31\x51\x30\x0a\x0a\x0a\x0a\x0a";

char TEST_05[] = "abcdefghijklmnopqrstuvwxyz123456789\n";

char TEST_06[] = "SIZE 72 mm,50mm\r\n DIRECTION 0,0\r\n SET CUTTER 1\r\n SET GAP ON\r\n SPEED 6\r\n DENSITY 5\r\n CLS\r\n TEXT 80,85,\"3.EFT\",0,4,4,\"BEEPRT\"\r\n LINE 0,100,576,100,5\r\n TEXTBOX 0,280,\"3.EFT\",0,1,1,510, L32,\"Nanjing Beeprt Information Technology Co., LTD -- Website:www.beeprt.com\" BARCODE 10,140,\"128\",80,0,0,3,3,\"9878787689653565567876\"\r\n PRINT 1,1\r";

char INIT_QRCODE[16] = "\x1D\x28\x6B\x03\x00\x31\x43\x01\x1D\x28\x6B\x03\x00\x31\x45\x33";

char *STATUS_REALTIME = "\x10\x04\x01";

char *LOGO_IMG="\x1d\x76\x30\x00\x0f\x00\x3c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x05\xb6\xdb\x6d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xef\xbe\xfb\xc0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7a\xba\xeb\xaf\x70\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xbf\xff\xff\xfd\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe8\x00\x00\x05\xb8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xb0\x00\x00\x00\x6c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xe0\x00\x00\x00\x3c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x60\x00\x00\x00\x34\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xc0\x00\x00\x00\x3c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xe0\x00\x00\x00\x2c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x60\x1c\x03\x80\x3c\x1f\xff\x80\x00\x00\x00\x3c\x00\x00\x01\xe0\x3c\x03\xc0\x34\x3f\xff\x00\x00\x00\x00\x38\x00\x00\x01\xa0\x2c\x02\xc0\x3c\x2a\xb5\x80\x00\x00\x00\x34\x00\x00\x01\xe0\x38\x03\xc0\x2c\x1f\xff\x00\x00\x00\x00\x38\x00\x00\x01\xa0\x1c\x03\x40\x38\x00\xd0\x00\x80\x00\x80\x3c\x40\x00\x01\xe0\x34\x03\xc0\x2c\x00\xe0\x07\xf0\x07\xf0\x2b\xf8\x00\x01\xa0\x1c\x02\xc0\x3c\x00\xb0\x1f\x78\x1f\x78\x3f\xb4\x00\x01\xe0\x3c\x03\xc0\x34\x00\xe0\x1b\xdc\x37\xdc\x3b\x7c\x00\x01\xa0\x18\x03\x40\x3c\x00\xf0\x3c\x34\x3c\x76\x3e\xb6\x00\x01\xe0\x3c\x03\xc0\x2c\x00\xd0\x34\x1e\x2c\x1c\x34\x1e\x00\x01\xa0\x1c\x02\xc0\x3c\x00\xe0\x38\x1a\x78\x04\x38\x1a\x00\x01\xe0\x34\x03\x80\x34\x00\xf0\x6f\xee\x28\x00\x3c\x1e\x00\x01\xa0\x1c\x03\xc0\x3c\x00\xd0\x3f\x7e\x78\x00\x34\x16\x00\x01\xe0\x3c\x05\x80\x2c\x00\xe0\x35\xe8\x38\x00\x3c\x1c\x00\x01\xa0\x16\x07\xc0\x38\x00\xf0\x38\x00\x6c\x0c\x34\x1e\x00\x01\xe0\x3f\x9d\xe0\x2c\x00\xd0\x3c\x00\x38\x3c\x38\x16\x00\x01\xa0\x1b\xf7\x78\x3c\x00\xe0\x36\x38\x3f\x56\x3c\x1e\x00\x01\xe0\x3e\xdf\xbc\x34\x00\xf0\x1f\xec\x17\xfc\x34\x16\x00\x01\xa0\x1b\xf8\xe8\x3c\x00\xc0\x0d\xdc\x1d\x68\x38\x1c\x00\x01\xe0\x3c\xa8\x38\x2c\x00\xe0\x07\x70\x07\xf0\x28\x0c\x00\x01\xa0\x14\x00\x00\x3c\x00\x00\x00\x80\x00\x00\x00\x00\x00\x01\xe0\x3c\x00\x00\x2c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xa0\x1c\x00\x00\x38\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xe0\x34\x00\x00\x3c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xf0\x1c\x00\x00\x6c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xba\xbd\x55\x55\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xef\xef\xff\xef\x68\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3d\x7a\xaa\xbb\xe0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xdf\xff\xfe\xa0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\xaa\xaa\xa5\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";

char *LOGO_BIG= "\x1d\x76\x30\x00\x2b\x00\x84\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x05\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xa0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xe0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xe0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0f\xff\xff\xfb\xb6\xdb\x6d\xb6\xdb\x6d\xb6\xdb\x6d\xff\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0f\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\xe0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\xd0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x06\x80\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x37\xbd\xef\x7b\xde\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xc0\x00\x00\x00\x00\x7f\xfc\x00\x00\x00\x7c\x00\x00\x00\x01\xf0\x00\x00\x00\x1f\xff\x00\x00\xff\xff\xff\xff\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xf0\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\xff\x00\x00\x00\x03\xfc\x00\x00\x00\x17\xff\x00\x03\xff\xff\xff\xff\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf0\x00\x00\x00\x00\x7f\xf8\x00\x00\x01\xff\x80\x00\x00\x07\xfe\x00\x00\x00\x1f\xff\x00\x03\xff\xff\xff\xff\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x07\xff\xff\xff\xff\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x07\xff\xff\xff\xff\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xf8\x00\x00\x00\x00\x7f\xfc\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x1f\xff\x00\x07\xff\xff\xff\xff\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x07\xff\xff\xff\xff\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x1f\xff\x00\x07\xff\xff\xff\xff\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x03\xff\xff\xff\xff\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x03\xff\xff\xff\xff\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x7f\xfc\x00\x00\x03\xff\xc0\x00\x00\x1f\xff\x80\x00\x00\x1f\xff\x00\x01\xff\xff\xff\xff\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x07\xff\xe0\x00\x00\x0f\xff\x00\x00\x00\x17\xf7\x00\x00\x7f\xf7\xff\xfb\xbb\xa0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x1f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xf8\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x01\x50\x00\x00\x00\xff\xf8\x02\xa0\x00\x00\x7f\xfc\x00\x00\x07\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x80\x00\x00\x01\xff\xf0\x00\x00\x00\x01\xff\xf0\x00\x00\x00\x00\x3f\xff\x00\x00\x00\x7f\xf8\x3f\xfe\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x00\x0f\xff\xfe\x00\x00\x00\x01\xff\xff\xe0\x00\x00\xff\xf8\xff\xff\xc0\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x00\x3f\xff\xff\x80\x00\x00\x07\xff\xff\xfc\x00\x00\xff\xfb\xff\xff\xf0\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x00\xff\xff\xff"
                "\xe0\x00\x00\x1f\xff\xff\xfe\x00\x00\x7f\xff\xff\xff\xf8\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x01\xff\xff\xff\xf0\x00\x00\x3f\xff\xff\xff\x80\x00\xff\xff\xff\xff\xfc\x00\x7f\xfc\x00\x00\x03\xff\xe0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x03\xff\xff\xff\xf8\x00\x00\x7f\xff\xff\xff\x80\x00\xff\xff\xff\xff\xfe\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x17\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x07\xff\xff\xff\xfc\x00\x00\xff\xff\xff\xff\xe0\x00\x7f\xff\xff\xff\xff\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x0f\xff\xff\xff\xfe\x00\x01\xff\xff\xff\xff\xe0\x00\xff\xff\xff\xff\xff\x80\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x1f\xff\xff\xff\xff\x00\x03\xff\xff\xff\xff\xf0\x00\xff\xff\xff\xff\xff\x80\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x1f\xff\xff\xff\xff\x00\x03\xff\xff\xff\xff\xf8\x00\x7f\xff\xff\xff\xff\x80\x7f\xfc\x00\x00\x07\xff\xc0\x00\x00\x1f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x3f\xff\xf5\xff\xff\x80\x07\xff\xff\xff\xff\xf8\x00\xff\xff\xff\xff\xff\xc0\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x3f\xff\x80\x1f\xff\x80\x07\xff\xfe\x9f\xff\xf8\x00\xff\xff\xff\xff\xff\xc0\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x7f\xfe\x00\x0f\xff\x80\x07\xff\xf0\x03\xff\xfc\x00\x7f\xff\xc0\x3f\xff\xe0\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x1f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x7f\xfc\x00\x07\xff\xc0\x0f\xff\xe0\x00\xff\xfc\x00\xff\xfe\x00\x0f\xff\xe0\x7f\xf8\x00\x00\x07\xff\xe0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x7f\xf8\x00\x03\xff\xc0\x0f\xff\xc0\x00\x7f\xf8\x00\xff\xfc\x00\x07\xff\xe0\x7f\xfc\x00\x00\x03\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xf8\x00\x03\xff\xc0\x0f\xff\x80\x00\x7f\xf8\x00\x7f\xf8\x00\x03\xff\xe0\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x17\xff\x00\x00\x00\x00\xff\xf0\x00\x00\xff\xf8\x00\x03\xff\xe0\x0f\xff\x00\x00\x3f\xf8\x00\xff\xf8\x00\x03\xff\xe0\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xf7\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xf0\x00\x01\xff\xe0\x1f\xff\x00\x00\x1f\xf0\x00\xff\xf8\x00\x03\xff\xe0\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\xff\xf0\x00\x01\xff\xc0\x1f\xff\x00\x00\x0f\xe0\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xf0\x00\x01\xff\xe0\x0f\xff\x00\x00\x03\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xfc\x00\x00\x07\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x01\xff\xf0\x00\x03\xff\xe0\x1f\xfe\x00\x00\x00\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x80\x00\x00\x01\xff\xf0\x00\x00\xff\xff\xff\xff\xff\xe0\x1f\xff\x00\x00\x00\x00\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x1f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x01\xff\xff\xff\xff\xff\xe0\x1f\xfe\x00\x00\x00\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xff\xff\xff\xff\xe0\x1f\xff\x00\x00\x00\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xe0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x01\xff\xff\xff\xff\xff\xc0\x1f\xff\x00\x00\x00\x00\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xfc\x00\x00\x03\xff\xc0\x00\x00\x0f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xff\xff\xff\xff\xe0\x1f\xfe\x00\x00\x00\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xe0\x00\x00\x1f\xff\x00\x00\x00\x17\xff\x00\x00\x00\x00\xff\xf0\x00\x01\xff\xff\xff\xff\xff\xc0\x1f\xff\x00\x00\x00\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xe0\x00\x00\x1f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xff\xff\xff\xff\x80\x1f\xfe\x00\x00\x00\x00\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xe0\x00\x00\x3f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xff\xff\xff\xff\x00\x1f\xff\x00\x00\x00\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xf0\x00\x00\x3f\xff\x00\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x01\xff\xf0\x02\x10\x00\x00\x1f\xff\x00\x00\x00\x00\x00\xff\xf8\x00\x01\xff\xe0\x7f\xfc\x00\x00\x07\xff\xf0\x00\x00\x7f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xf0\x00\x00\x00\x00\x1f\xff\x00\x00\x03\x80\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xfc\x00\x00\x7f\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\xff\xf0\x00\x00\x00\x00\x1f\xff\x00\x00\x0f\xf0\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xfc\x00\x01\xff\xff\x80\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xf0\x00\x00\x00\x00\x1f\xff\x00\x00\x1f\xf0\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xfe\x00\x03\xff\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xf0\x00\x00\x00\x00\x1f\xff\x80\x00\x3f\xf8\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xff\x80\x07\xff\xff\xc0\x00\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\xff\xf8\x00\x00\x00\x00\x0f\xff\x80\x00\x3f\xfc\x00\xff\xf8\x00\x01\xff\xe0\x7f\xfc\x00\x00\x03\xff\xff\xf0\x3f\xff\xff\xf8\x00\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\xff\xfc\x00\x00\x00\x00\x0f\xff\xc0\x00\x7f\xfc\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xff\xff\xff\xff\xff\xff\x80\x00\x17\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x7f\xfc\x00\x00\x28\x00\x0f\xff\xe0\x00\xff\xf8\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xe0\x00\x1f\xf7\x00\x00\x00\x01\xff\xf0\x00\x00\x7f\xff\x00\x01\xfc\x00\x07\xff\xf0\x03\xff\xfc\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xff\xff\xff\xff\xff\xff\xf0\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x3f\xff\xc0\x2f\xfe\x00\x07\xff\xfe\x9f\xff\xf8\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xf8\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x3f\xff\xff\xff\xff\x00\x07\xff\xff\xff\xff\xf8\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xfc\x00\x00\x07\xff\xff\xff\xff\xff\xff\xff\xf8\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x1f\xff\xff\xff\xff\x80\x03\xff\xff\xff\xff\xf8\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xf8\x00\x1f\xff\x80\x00\x00\x00\xff\xf0\x00\x00\x1f\xff\xff\xff\xff\x00\x01\xff\xff\xff\xff\xf0\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xff\xff\xff\xfe\xff\xff\xf8\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x0f\xff\xff\xff\xff\x80\x00\xff\xff\xff\xff\xe0\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xff\xff\xff\xfc\x3f\xff\xf8\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x07\xff\xff\xff\xff\x00\x00\xff\xff\xff\xff\xe0\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xff\xff\xff\xf8\x3f\xff\xf8\x00\x1f\xff\x00\x00\x00\x01\xff\xf0\x00\x00\x03\xff\xff\xff\xff\x00\x00\x7f\xff\xff\xff\x80\x00\x7f\xf8\x00\x01\xff\xe0\x7f\xfc\x00\x00\x03\xff\xff\xff\xff\xe0\x0f\xff\xf0\x00\x1f\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x01\xff\xff\xff\xff\x00\x00\x1f\xff\xff\xff\x80\x00\xff\xf8\x00\x01\xff\xe0\x7f\xf8\x00\x00\x07\xff\xc7\xff\xff\x80\x03\xff\xf0\x00\x17\xff\x00\x00\x00\x00\xff\xf0\x00\x00\x00\xff\xff\xff\xfc\x00\x00\x0f\xff\xff\xfe\x00\x00\x7f\xf0\x00\x01\xff\xe0\x7f\xf8\x00\x00\x03\xff\xc1\xff\xfe\x00\x00\xff\xc0\x00\x1f\xff\x00\x00\x00\x00\x7f\xe0\x00\x00\x00\x3f\xff\xff\xf8\x00\x00\x07\xff\xff\xf8\x00\x00\x3f\xf0\x00\x00\xff\xc0\x7f\xf8\x00\x00\x07\xff\xc0\x17\x50\x00\x00\x15\x00\x00\x1f\xff\x00\x00\x00\x00\x7f\xc0\x00\x00\x00\x0f\xff\xff\xe0\x00\x00\x01\xff\xff\xe0\x00\x00\x3f\xe0\x00\x00\x7f\x80\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x1f\x80\x00\x00\x00\x02\xff\xfe\x80\x00\x00\x00\x3f\xff\x80\x00\x00\x0f\x80\x00\x00\x3f\x00\x7f\xfc\x00\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x15\x40\x00\x00\x00\x00\x01\x50\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xf8\x00\x00\x07\xff\xe0\x00\x00\x00\x00\x00\x00\x00\x1f\xf7\x00\x00\x00\x00\x00"
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xdf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\x7f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfc\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x1f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfe\x00\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x3f\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7f\xfe\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x7f\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\x00\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x7f\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\x00\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x00\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\xc0\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x01\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\xe0\x00\x03\xff\xc0\x00\x00\x00\x00\x00\x00\x03\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1f\xff\xf0\x00\x07\xff\xe0\x00\x00\x00\x00\x00\x00\x0f\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0f\xff\xfe\x00\x07\xff\xc0\x00\x00\x00\x00\x00\x00\x7f\xff\xf8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xe0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xf0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xe0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x2f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xfc\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x6d\xdd\xb6\xb6\xdd\xdd\xdd\xdd\xdd\xdd\xa0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
char *BARCODE_EXAMPLE = "\x1D\x68\x10"
                        "\x1D\x77\x02"
                        "\x1D\x48\x01"
                        "\x1D\x66\x01"
                        "\x1D\x6B\x00\x71\x77\x65\x72\x74\x79\x75\x69\x6f\x70\x61\x00";
                        // d1…dk 00(FF)";

char *BARCODE_TEST = "\x1b\x40\x1d\x48\x02\x1d\x68\x64\x1d\x77\x03\x30\x0D\x0A\x1d\x6b\x00\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x00\x31\x0D\x0A\x1d\x6b\x01\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x00\x32\x0D\x0A\x1d\x6b\x02\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x32\x00\x33\x0D\x0A\x1d\x6b\x03\x30\x31\x32\x33\x34\x35\x36\x37\x00\x34\x0D\x0A\x1D\x6B\x04\x30\x31\x32\x41\x42\x20\x24\x25\x2B\x2D\x2E\x2F\x00\x35\x0D\x0A\x1d\x6b\x05\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x32\x00\x36\x0D\x0A\x1d\x6b\x06\x2D\x31\x32\x42\x24\x2B\x2D\x2E\x00\x1d\x6b\x06\x43\x31\x32\x33\x34\x35\x36\x34\x38\x39\x00\x36\x35\x0D\x0A\x1d\x6b\x41\x0c\x31\x32\x33\x34\x35\x36\x37\x38\x39\x30\x31\x32\x36\x36\x0D\x0A\x1d\x6b\x42\x0c\x30\x32\x33\x34\x35\x36\x30\x30\x30\x30\x38\x39\x36\x37\x0D\x0A\x1d\x6b\x43\x0c\x30\x32\x33\x34\x35\x36\x30\x30\x30\x30\x38\x39\x36\x38\x0D\x0A\x1d\x6b\x44\x08\x30\x32\x33\x34\x35\x36\x30\x30\x36\x39\x20\x20\x4e\x4f\x20\x24\x25\x2b\x2d\x2e\x2f\x31\x32\x33\x34\x35\x36\x30\x30\x0D\x0A\x1d\x6b\x45\x11\x4e\x4f\x20\x24\x25\x2b\x2d\x2e\x2f\x31\x32\x33\x34\x35\x36\x30\x30\x37\x30\x20\x20\x20\x30\x32\x33\x34\x35\x36\x30\x30\xC5\xBC\xCA\xFD\x0D\x0A\x1d\x6b\x46\x09\x30\x31\x32\x33\x34\x35\x36\x30\x30\x37\x31\x0d\x0a\x1d\x6b\x47\x05\x32\x33\x34\x35\x36\x37\x32\x0d\x0a\x1d\x6b\x48\x0b\x32\x33\x34\x35\x36\x41\x42\x2e\x2f\x2b\x2c\x37\x33\x0d\x0a\x1d\x6b\x49\x0A\x7B\x42\x4E\x6F\x2E\x7B\x43\x0C\x22\x38\n\n\n\n\n\n\n\n";

char ticket[] = "\n\x1d\x21\x11\x1B\x61\x01 Estacionamento \n\x1B\x61\x00\x1d\x21\x00";
                //"\x1B\x61\x00 Data: %02d/%02d/%04d %02d:%02d:%02d \n";