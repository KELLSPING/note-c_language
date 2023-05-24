#include <stdio.h>
#include <stdlib.h>

int fun(int x)
{
    int count = 0;
    while (x)
    {
        count++;
        x = x & (x - 1);
    }
    return count;
}

int main()
{
    int ans = 0;

    ans = fun(456) + fun(123) + fun(789);
    printf("ans =%d", ans);

    return 0;
}