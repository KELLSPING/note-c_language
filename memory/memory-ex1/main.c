/**
 * * 切換目錄
 * * cd memory/memory-ex1/output
 *
 *
 * * 使用 size 查看它的內部記憶體配置
 * * size main.exe
 */

#include <stdio.h>
#include <stdlib.h>

// double global[30]; // 儲存於 bss 的未初始化靜態變數

int main()
{
    static int x[5] = {1, 2, 3, 4, 5}; // 儲存於 data 的已初始化靜態變數

    // 儲存於 heap 區段
    char *buf = (char *)malloc(sizeof(char) * 100);
    free(buf);

    return 0;
}