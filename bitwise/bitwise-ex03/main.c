/**
 * * 求一個數的最高位1在第幾位
 */

#include <stdio.h>
#include <stdint.h>

void searchHighestBit(uint8_t N)
{
    uint8_t len = sizeof(N) * 8;
    uint8_t mask = 0x80;
    if (N == 0)
    {
        printf("N is 0");
    }

    while (N != 0)
    {
        if ((N & mask) != 0)
        {
            printf("hightest bit is %d th bit\n", len - 1);
            break;
        }
        mask = mask >> 1;
        len--;
    }
}

int main()
{
    uint8_t a = 0x65;    // 0110 0101
    uint8_t mask = 0x80; // 1000 0000
    int bit = 0;
    printf("a = %x\n", a);

    searchHighestBit(a);

    return 0;
}