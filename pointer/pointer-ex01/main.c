
#include <stdio.h>
int main()
{
    printf("%p\n", main);

    int *ptr = main;
    printf("sizeof main: %ld\n", sizeof(ptr));
    return 0;
}