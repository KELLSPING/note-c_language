#include <stdio.h>

#define SIZE 10

int binsearch(int *arr, int searchNum, int arrSize)
{
    int left = 0, right = arrSize;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > searchNum)
        { // 往左半部找
            right = mid - 1;
        }
        else if (arr[mid] < searchNum)
        { // 往右半部找
            left = mid + 1;
        }
        else
            return mid;
    }
    return -1; // not found
}

int main()
{
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    
    int ans = 0;

    ans = binsearch(arr, 8, SIZE);
    printf("%d", ans);


    return 0;
}