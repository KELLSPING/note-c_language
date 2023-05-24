#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 4; i++) // height
    {
        int print = 1;
        int plus = 1;
        for (int j = 0; j < 8; j++) // width
        {
            if (abs(4 - j) <= i)
            {
                printf("%d", print);
                print += plus;
            }
            else
            {
                printf(" ");
            }

            if (j == 3) // mid
            {
                plus = -1;
            }
        }
        printf("\n");
    }
}
