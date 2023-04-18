#include <stdio.h>
#include <stdlib.h>

void swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}

void reverseString(char *s, int sSize)
{
    if (s == NULL)
        exit(0);
    int j = sSize - 1;
    for (int i = 0; i < sSize / 2; i++)
    {
        swap(&s[i], &s[j]);
        j--;
    }
}

int main()
{
    char arr[10] = "Helloworld";

    printf("arr:%s\n", arr);

    int len = sizeof(arr) / sizeof(arr[0]);

    reverseString(arr, len);

    printf("arr:%s\n", arr);

    return 0;
}