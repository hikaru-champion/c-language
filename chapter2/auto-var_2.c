#include <stdio.h>

/*
// 引数を受け取らず、
// 文字列を呼び出し元の関数に渡す関数funcの宣言
*/

int
func(int num1, int num2) {
	int sum = num1 + num2;

	return sum;
}

/*
// メイン関数
// プログラムは、ここから始まる
*/
int
main(int argc, char * argv[]) {
	int num1 = 1, num2 = 2;
	printf("sum value is %d", func(num1, num2));

	return 0;
}
