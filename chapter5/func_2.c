#include <stdio.h>

// プロトタイプ宣言
// 引数としてint型の変数を2個受け取り、int型の値を返す関数sumを定義
int sub(int, int);

// 関数の実態
int
sub(int a, int b)
{
	a -= b;

	return a;
}

int
main(int argc, char * argv[])
{
	int a;
	int answer;

	a = 2;

	printf("before sub() a = %d\n", a);

	answer = sub(a, 1); // 関数の利用

	printf("after sub() a = %d\n", a);
	
	printf("answer = %d\n", answer);

	return 0;
}
