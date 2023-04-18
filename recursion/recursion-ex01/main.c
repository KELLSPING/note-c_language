/**
 * * 最大公因數、遞迴寫法
*/

#include <stdio.h>

int gcd(int x, int y)
{               
    if (y == 0) /* 餘 0，除數 x 即為最大公因數 */
        return x;
    else
        return gcd(y, x % y); /* 前一步驟的除數為被除數，餘數為除數 */
}

int main()
{
    int ans = 0;
    
    ans = gcd(50, 25); // x > y
    printf("ans: %d", ans);

    return 0;
}