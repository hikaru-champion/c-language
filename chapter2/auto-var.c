#include <stdio.h>

/*
// 引数を受け取らず、
// 文字列を呼び出し元の関数に渡す関数funcの宣言
*/

char *
func(void) {
	static char one_string[14] = "hello, world\n";

	printf("from func: %s", one_string);

	return one_string;
}

/*
// メイン関数
// プログラムは、ここから始まる
*/
int
main(int argc, char * argv[]) {
	printf("from main: %s", func());

	return 0;
}
