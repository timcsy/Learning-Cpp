1-Hellow World
===

步驟
---
1. 新增一個資料夾
2. 在編輯器中打開資料夾
3. 在資料夾下新增一個檔案 test.cpp
4. 將以下程式碼複製到 test.cpp 中
	```
	#include <iostream>
	using namespace std;

	int main() {
		cout << "Hello World\n" << endl;
		return 0;
	}
	```
5. 打開命令提示字元(要切換到該資料夾)，輸入
	```
	g++ -o test test.cpp
	```
	來編譯程式
6. 再輸入
	```
	.\test.exe
	```
	來執行程式
7. 最後可以看到結果
	```
	> Hello World
	```

說明
---
可以參考上面test.cpp裡面的註解