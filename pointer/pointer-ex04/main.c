#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *p = (int *)(&a + 1);
    int *q = (int *)(&a);

    printf("address of a =%p\n", a);
    printf("address of a[0] =%p\n", a+0);
    printf("address of a[1] =%p\n", a+1);
    printf("address of a[2] =%p\n", a+2);
    printf("address of a[3] =%p\n", a+3);
    printf("address of a[4] =%p\n", a+4);
    printf("address of p =%p\n", p);
    printf("address of q =%p\n", q);

    return 0;
}