#include <stdio.h>

#define TRUE 1
#define FALSE 0

int function(int N){
    return N>0 && (N&(N-1)) == 0;
}

int main(){
    int number = 64, ans = 0;

    ans = function(number);
    if (ans == TRUE)
    {
        printf("%d is power of 2.", number);
    }
    

    return 0;
}