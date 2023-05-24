#include <stdio.h>

#define MUX(a, b) a *b

int main()
{
    int ans = 0;

    ans = MUX(10 + 5, 10 - 5);
    printf("ans =%d", ans);

    return 0;
}