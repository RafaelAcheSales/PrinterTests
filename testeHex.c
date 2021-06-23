#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 32

void string2hexString(char* input, char* output)
{
    int loop;
    int i; 
    
    i=0;
    loop=0;
    
    while(input[loop] != '\0')
    {
        sprintf((char*)(output+i),"%02X", input[loop]);
        loop+=1;
        i+=2;
    }
    //insert NULL at the end of the output string
    output[i++] = '\0';
}


char testeStr[80];
//scanf();
int main() {
    // char string[SIZE];
    // int i = 0;

    // printf("Text to translate: ");
    // fgets(string,SIZE,stdin);
    // char output[512];
    // while(string[i] != '\n')
    // {
    //     sprintf(output, "%02x ",string[i]);
    //     i++;
    // }
    // // putchar(string[i]);
    // printf("%s", output);


    char hex[50] = "\x12\xff\x63\x62";

    scanf("%s", testeStr);

    printf("%s junto com %s\n", testeStr, hex);
    return 0;
}