// 我是單行註解

/* 我是多行註解
   第二行
	 第三行  */

//-----------------標頭檔區 (Header)-----------------//
// #include 是引用別人寫好的一些東西
#include <iostream> // iostream 意思是 input output stream 的縮寫，是負責處理輸入輸出的
using namespace std; // 這行就是說使用standard(標準)的名稱空間(避免變數重複定義)

//------------------主程式區 (Main)------------------//
// int 是 integer(整數)，int main(){} 是程式的進入點
int main() {
	// cout 是 C++ output(C++的輸出)，需要在標頭檔區引入 iostream 才能使用
	// endl 是 end of line(換行)，需要在標頭檔區引入 iostream 才能使用
	// 字串是用""包圍的一串文字
	// << 是資料的流向
	cout << "Hello World嗨" << endl; // 寫C++的程式每個敘述(statement)最後一定要加分號(;)
	return 0; // 告訴呼叫者(命令提示字元)說我執行完了
}