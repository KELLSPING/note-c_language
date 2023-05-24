#include <stdio.h>
#include <stdlib.h>
/**
 * * 傳值呼叫 call by value
*/
int callByValue(int a, int b)
{
    a = 1;
    b = 1;
    return a;
}

/**
 * * 傳址呼叫 call by address, call by pointer
*/
int callByAddress(int *a, int *b)
{
    *a = 2;
    *b = 2;
}

/**
 * ! 參考呼叫 call by reference，只能用在 C++
*/
// int callByReference(int &a, int &b)
// {
//     a = 3;
//     b = 3;
// }

int main()
{
    int a = 0, b = 0;

    a = callByValue(a, b);
    printf("a:%d, b:%d\n", a, b);

    callByAddress(&a, &b);
    printf("a:%d, b:%d\n", a, b);

    // callByReference(a, b);
    // printf("a:%d, b:%d\n", a, b);

    return 0;
}