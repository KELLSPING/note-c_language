#include <stdio.h>
int main()
{
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel character ");
            break;
        default:
            printf("Not a Vowel character ");
            break;
        }
        printf("%d \n", i);
    }

    return 0;
}