#include <stdio.h>
#include <string.h>
#include "lib.c"

#define LEN 15

int main()
{
    unsigned char bytes[LEN];

    bytes[0] = 0b01001101;
    bytes[1] = 79;
    bytes[2] = 0b0100000;
    bytes[3] = 0b1101110;
    bytes[4] = 61;
    bytes[5] = 0x6D;
    bytes[6] = 0b1100101;
    bytes[7] = 20;
    bytes[8] = 69;
    bytes[9] = 73;
    bytes[10] = 0b0101110;
    bytes[11] = '.';
    bytes[12] = 0b0101110;
    bytes[13] = 0b0100000;
    bytes[14] = 0;

    for (int i = 0; i < LEN; i++)
    {
        printf("%c ", bytes[i]);
    }

    printf("\n");

    printf(" [i]   dec  hex  bin       char\n");
    printf(" ---   ---  ---  --------  ----\n");
    for (int i = 0; i < LEN; i++)
    {

        printf("[%02u]   %03u   %x  ", i, bytes[i], bytes[i]);
        for (int b = 7; b >= 0; b--)
        {
            if (bytes[i] & (1 << b))
                printf("1");
            else
                printf("0");
        }
        printf("   %c\n", bytes[i]);
    }

    printf("%s\n", bytes);
}
