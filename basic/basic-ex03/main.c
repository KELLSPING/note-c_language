/**
 * * array 初始化，列印
*/

#include <stdio.h>

int main()
{
    // char array 中，未被初始化的元素，使用 '\0' 
    char a[2][3][3] = {'a','b','c','d','e','f','g','h'};
    printf("%s\n", a);

    return 0;
}