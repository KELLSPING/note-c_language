/**
 * * 給一個unsigned short, 問換算成16進制後四個值是否相同? 若是回傳1,否則回傳0
*/

#include <stdio.h>
#include <stdint.h>

int isHexEqaul(uint16_t input){
    uint16_t hex[4];
    uint8_t is_eqaul;

    hex[0] = (input & 0xF000) >> 12;
    hex[1] = (input & 0x0F00) >> 8;
    hex[2] = (input & 0x00F0) >> 4;
    hex[3] = input & 0x000F;

    for (int i = 0; i < 4; i++)
    {
        printf("%x ", hex[i]);
    }
    printf("\n");

    is_eqaul = ((hex[0] == hex[1]) && (hex[1] == hex[2]) && (hex[2] == hex[3]));
    return is_eqaul;
}

int main(){
    uint16_t input = 0xAAAA;
    uint8_t is_eqaul;
    printf("input = %x\n", input);

    is_eqaul = isHexEqaul(input);
    printf("is_eqaul = %d\n", is_eqaul);

    return 0;
}