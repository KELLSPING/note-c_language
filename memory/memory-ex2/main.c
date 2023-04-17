#include <stdio.h>

char *getString()
{
    // String constants are stored in Data Section (not in Stack Section).
    char *str = "Nice test for strings";
    return str;
}

char *getString2()
{
    // Array variables are stored in Stack Section.
    char str[] = "Will I be printed?";
    return str;
}

int main()
{
    printf("%s", getString());
    printf("%s", getString2());
    return 0;
}