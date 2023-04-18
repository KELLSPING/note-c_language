#include <stdio.h>

int main()
{
    int a;             // a) An integer
    int *a;            // b) A pointer to an integer
    int **a;           // c) A pointer to a pointer to an integer
    int a[10];         // d) An array of 10 integers
    int *a[10];        // e) An array of 10 pointers to integers
    int(*a)[10];       // f) A pointer to an array of 10 integers
    int (*a)(int);     // g) A pointer to a function a that takes an integer argument and returns an integer
    int (*a[10])(int); // h) An array of 10 pointers to functions that take an integer argument and return an integer

    return 0;
}