#include <stdio.h>
int main()
{
    int x;

    // scanf 成功輸入將回傳 1，失敗將回傳 0
    printf("%d", scanf("%d", &x));

    return 0;
}