/**
 * * 求一個數的最高位1在第幾位
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a = 0x65; // 0110 0101
    uint8_t mask = 0x80; // 1000 0000
    printf("a = %x\n", a);

    int len = sizeof(a) * 8;
    printf("len = %d\n", len);

    if (a == 0)
    {
        printf("a is 0");
    }
    else
    {
        while (a != 0)
        {
            if ((a & mask) != 0)
            {
                printf("hightest bit is %d th bit\n", len-1);
                break;
            }
            mask = mask >> 1;
            len--;
        }
    }

    return 0;
}