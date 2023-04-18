/**
 * * 檢查位元
*/

#include <stdio.h>

int function(int);

int main()
{
    int ans = 0;
    ans = function(0xabcd);
    printf("ans: %x\n", ans);

    ans = function(0xfbcd);
    printf("ans: %x\n", ans);

    ans = function(0xaccd);
    printf("ans: %x\n", ans);

    return 0;
}

int function(int data)
{
    if ((data & 0xf000) == 0xa000)
    {
        if ((data & 0x0f00) == 0x0b00)
        {
            return 0x00cd;
        }
        else
        {
            printf("display ID incorrect\n");
            return 0xffff;
        }
    }
    else
    {
        printf("checksum incorrect\n");
        return 0xffff;
    }
}