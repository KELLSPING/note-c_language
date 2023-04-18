#include <stdio.h>

int main()
{
    char *str = "hello";
    char arr[] = "hello";

    printf("str :%p\n", str);
    printf("arr :%p\n", arr);

    if (str == arr)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}