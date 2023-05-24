# Note of FW interview #

* 記錄重點
* 記錄考題、考古題

## 學習資源 ##

* 課程
  * 周志遠教授 - 作業系統
  * 黃婷婷教授 - 計算機結構
  * 陳士杰教授 - 作業系統

* 書籍
  * 作業系統, 10/e (授權經銷版)(Silberschatz: Operating System Concepts, 10/e)
  * 基礎資料結構 ─ 使用 C (Fundamentals of Data Structures in C, 2/e)
  * C 語言教學手冊, 4/e

* 網頁
  * C語言測試 應知道的0x10個基本問題
    * <https://creteken.pixnet.net/blog/post/24524138>
  * C/C++ - 常見 C 語言觀念題目總整理（適合考試和面試）
    * <https://www.mropengate.com/2017/08/cc-c.html>
  * C/C++ 常見試題
    * <https://medium.com/@earth875/c-c-%E5%B8%B8%E8%A6%8B%E8%A9%A6%E9%A1%8C-961619b14f88>
  * 面試整理
    * <https://hackmd.io/@g9tdU4gDSTiEZrerd0g7-w/SyCXEfsSE>

## My Dev Env ##

* Computer: Aspire 5

* OS: Windows 11

* System type: 64 bits

* CPU: i5-1235U

* Package Manager: Chocolatey

* Terminal: Windows Terminal + PowerShell core 7

* Compiler: MinGW-w64 12.2.0

* IDE: VSCode

## Basic ##

* basic-ex01: 優先順序
* basic-ex02: 註解
* basic-ex03: array 初始化，列印
* basic-ex04: 用一行程式碼判斷是否為2的冪次方

## Bitwise ##

* bitwise-ex01: 位元處理，補數運算
* bitwise-ex02: 給一個unsigned short, 問換算成16進制後四個值是否相同? 若是回傳1,否則回傳0
* bitwise-ex03: 求一個數的最高位1在第幾位
* bitwise-ex04: 基本位元運算

## Enum ##

* enum-ex01: 使用 enum、迴圈、判斷、列印
* enum-ex02: 使用 enum、迴圈、判斷、列印

## For loop ##

* for_loop-ex01: 判斷圈數
* for_loop-ex02:

## I/0 ##

* io-ex01: 判斷輸出
* io-ex02:

## Marco ##

* marco-ex01: 聚集函數未加入括號
* marco-ex02:

## Memory ##

* memory-ex01: 使用 size 查看程式內部記憶體配置
* memory-ex02: 區別使用不同記憶體配置的結果
* memory-ex03: 使用 static ，並觀察記憶體配置的結果

## Pointer ##

* pointer-ex01: main() 的位址
* pointer-ex02:
* pointer-ex03: 指標名詞解釋
* pointer-ex04: 位址運算
* pointer-ex05: 位址運算、運算子的優先順序
* pointer-ex06:
  * 傳值呼叫 (call by value)
  * 傳址呼叫 (call by address, call by pointer)
  * 參考呼叫 (call by reference): 只能用在 C++

## Recursion ##

* recursion-ex01: 最大公因數，遞迴寫法

## String ##

* string-ex1: 字串反轉
* string-ex2: 字串比較，記憶體位址使否相等

## 聯發科考題 ##

* mediatek_test-ex01: 位元運算、求值
* mediatek_test-ex02: Macro的陷阱題，因為 for 迴圈沒有加括號

## 群聯考題 ##

* phison_test-ex01
  * 給一個int a[20]已排序的陣列，請寫一個function(a, size)能印出0~500的數字，且不包含a陣列內的元素，請用最少的時間和空間複雜度完成
* phison_test-ex02
  * 給一個int a[20]已排序的陣列，請寫一個function(a, size, b) 能依照參數b(b = 0~4)別印出該區間的數字，且不包含a陣列內的元素，例如 b =0, 印出0~99 b = 1, 印出100~199
* phison_test-ex03:

## 安霸考題 ##

* ambarella_test-ex01: 列印數字
* ambarella_test-ex02:

## 群創考題 ##

* innolux_test-ex01: 檢查位元
* innolux_test-ex02:

## OS ##
