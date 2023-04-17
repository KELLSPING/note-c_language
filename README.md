# Note of C Language #

## My Dev Env ##

* Computer: Aspire 5

* OS: Windows 11

* System type: 64 bits

* CPU: i5-1235U

* Package Manager: Chocolatey

* Terminal: Windows Terminal + PowerShell core 7

* Compiler: MinGW-w64 12.2.0

* IDE: VSCode

## 記憶體配置 ##

* text
  * 文字區段 (text segment)，也可以稱為程式碼區段 (code segment)。
  * 存放可執行的 CPU 指令 (instructions)。
  * 文字區段的資料是共用的。
  * 文字區段通常是唯獨的，避免程式本身誤改了自己的 CPU 指令。

* data
  * 初始化資料區段 (initialized data segment)
  * 儲存已經初始化的靜態變數，例如: 全域變數、靜態變數
  * 分為唯獨區域和可讀寫區域
    * 唯獨區域 (read-only area): 存放固定的常數。
    * 可讀寫區域 (read-write area): 存放一般變數，其資料會隨著程式的執行而改變。

* bss
  * 為初始化資料區段 (uninitialized data segment)，又稱為 bss 區段 (block started by symbol)
  * 儲存尚未被初始化的靜態變數，，而這些變數在程式執行之前會被系統初始化為 0 或是 null。

* stack
  * 堆疊區段 (stack segment)
  * 後進先出 (FILO)
  * 繁中為堆疊、簡中為棧
  * 用於儲存函數的區域變數，以及各種函數呼叫時需要儲存的資訊（例如函數返回的記憶體位址還有呼叫者函數的狀態等）
  * 每一次的函數呼叫就會在堆疊區段建立一個 stack frame，儲存該次呼叫的所有變數與狀態
  * 從高記憶體位址往低記憶體位址成長

* heap
  * 堆積區段 (heap segment)
  * 繁中為堆積、簡中為堆
  * 儲存動態配置的變數
  * 從低記憶體位址往高記憶體位址成長

* system
  * 儲存一些命令列參數與環境變數，這部分會跟系統有關。

<div style="text-align:center">
    <img src="img/C 語言程式記憶體配置.png" alt= “03_01-layout_of_a_process_in_memory” width="50%">
    <p>C 語言程式記憶體配置</p>
</div>
