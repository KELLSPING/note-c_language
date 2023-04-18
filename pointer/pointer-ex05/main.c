#include <stdio.h>

#define SIZE 5

int main()
{
    int a[SIZE] = {6, 7, 8, 9, 10};

    int *p = a;

    *(p++) += 123;

    *(++p) += 123;

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}