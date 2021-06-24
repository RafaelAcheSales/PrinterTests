
char *PRINT_LINE_FEED = "\x0a";
char *PRINT_CARRIAGE_RETURN = "\x0d";
char PARTIAL_CUT_ONE[] = {'\x0a','\x0a','\x0a','\x0a','\x1b','\x69', '\x0a'};
char *QR_CODE_MODEL = "\x1d\x28\x6b\x03\x00\x31\x63\x03";
char *QR_CODE_DATA = "\x1d\x28\x6b\x64\x0a\x31\x50\x30\x0a\x0a\x61" ;
char *QR_CODE_PRINT = "\x1d\x28\x6b\x03\x00\x31\x51\x30";
char *TEST_PAPER = "\x12\x54\n";
char *TRANSMIT_STATUS = "\x1d\x72\x01\n";
char *REALTIME_TRASMIT_STATUS_01 = "\x10\x04\x01";
char *REALTIME_TRASMIT_STATUS_02 = "\x10\x04\x02";
char LINE_FEED_INT = (unsigned char ) 10;
char *TEST_01 = "\x1d\x28\x6b\x03\x00\x31\x63\x08";
                
char TEST_02[] = "\x1b\x4d\x01 Fonte01 \n"
                "\x1b\x4d\x02 Fonte02 \n"
                "\x1b\x4d\x03 Fonte03 \n"
                "\x1b\x4d\x04 Fonte04 \n"
                "\x1b\x4d\x01 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n"
                "\x1b\x4d\x02 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n"
                "\x1b\x4d\x03 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n"
                "\x1b\x4d\x04 01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789\n\n\n\n\n\n"
                "\x1b\x69\n";

char TEST_03[] ="\x1b\x40"
                "\x1d\x28\x6b\x03\x00\x31\x43\x03"
                "\x1d\x28\x6b\x03\x00\x31\x45\x30"
                "\x1d\x28\x6b\x06\x00\x31\x50\x30\x41\x42\x43";
                // "\x1b\x61\x01"
                // "\x1d\x28\x6b\x03\x00\x31\x52\x30"
                // "\x1d\x28\x6b\x03\x00\x31\x51\x30";
                
char TEST_04[] = "\x1b\x40\x1d\x28\x6b\x03\x00\x31\x43\x03\x1d\x28\x6b\x03\x00\x31\x45\x30\x1d\x28\x6b\x06\x00\x31\x50\x30\x65\x66\x43\x1b\x61\x01\x1d\x28\x6b\x03\x00\x31\x52\x30\x1d\x28\x6b\x03\x00\x31\x51\x30\x0a\x0a\x0a\x0a\x0a";


char *BARCODE_EXAMPLE = "\x1b\x40\x1d\x48\x02\x1d\x68\x64\x1d\x77\x03"
                        "\x30\x0D\x0A"
                        "\x1d\x6b\x00\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x00"
                        "\x31\x0D\x0A"
                        "\x1d\x6b\x01\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x00"
                        "\x32\x0D\x0A"
                        "\x1d\x6b\x02\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x32\x00"
                        "\x33\x0D\x0A"
                        "\x1d\x6b\x03\x30\x31\x32\x33\x34\x35\x36\x37\x00"
                        "\x34\x0D\x0A"
                        "\x1D\x6B\x04\x30\x31\x32\x41\x42\x20\x24\x25\x2B\x2D\x2E\x2F\x00"
                        "\x35\x0D\x0A"
                        "\x1d\x6b\x05\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x31\x32\x00"
                        "\x36\x0D\x0A"
                        "\x1d\x6b\x06\x2D\x31\x32\x42\x24\x2B\x2D\x2E\x00"
                        "\x1d\x6b\x06\x43\x31\x32\x33\x34\x35\x36\x34\x38\x39\x00"
                        "\x36\x35\x0D\x0A"
                        "\x1d\x6b\x41\x0c\x31\x32\x33\x34\x35\x36\x37\x38\x39\x30\x31\x32"
                        "\x36\x36\x0D\x0A"
                        "\x1d\x6b\x42\x0c\x30\x32\x33\x34\x35\x36\x30\x30\x30\x30\x38\x39"
                        "\x36\x37\x0D\x0A"
                        "\x1d\x6b\x43\x0c\x30\x32\x33\x34\x35\x36\x30\x30\x30\x30\x38\x39"
                        "\x36\x38\x0D\x0A"
                        "\x1d\x6b\x44\x08\x30\x32\x33\x34\x35\x36\x30\x30"
                        "\x36\x39\x20\x20\x4e\x4f\x20\x24\x25\x2b\x2d\x2e\x2f\x31\x32\x33\x34\x35\x36\x30\x30\x0D\x0A"
                        "\x1d\x6b\x45\x11\x4e\x4f\x20\x24\x25\x2b\x2d\x2e\x2f\x31\x32\x33\x34\x35\x36\x30\x30"
                        "\x37\x30\x20\x20\x20\x30\x32\x33\x34\x35\x36\x30\x30\xC5\xBC\xCA\xFD\x0D\x0A"
                        "\x1d\x6b\x46\x09\x30\x31\x32\x33\x34\x35\x36\x30\x30"
                        "\x37\x31\x0d\x0a"
                        "\x1d\x6b\x47\x05\x32\x33\x34\x35\x36"
                        "\x37\x32\x0d\x0a"
                        "\x1d\x6b\x48\x0b\x32\x33\x34\x35\x36\x41\x42\x2e\x2f\x2b\x2c"
                        "\x37\x33\x0d\x0a"
                        "\x1d\x6b\x49\x0A\x7B\x42\x4E\x6F\x2E\x7B\x43\x0C\x22\x38";


char *QR_CODE_TEXT = "dawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkd"
"dawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvslajdyhwgvalodjhasvldjhavlojshdvlajhsdbvlaskjdbhujdwahjudwiohdauihsdjbsjfbvfkddawdwaawddnawhydyhasdgiayuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwdgaoduywgadukyawgudiokyawdgkwauydgvakwduyawoduyawgvdolasuyhvdgloasjbdyhvoawludygvaoljshdgvlajdhkgvawoluydjvglajhdsvsla";