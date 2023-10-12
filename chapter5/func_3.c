#include <stdio.h>

// プロトタイプ宣言
// 引数としてdouble型の変数を2個受け取り、int型の値を返す関数sumを定義
int sum(double, double);

int
main(int argc, char * argv[])
{
	int num_1;
	int num_2;
	int answer;

	num_1 = 1;
	num_2 = 2;

	answer = sum(num_1, num_2); // 関数の利用

	printf("answer = %d\n", answer);

	return 0;
}

int
sum(double a, double b)
{
	int return_value;

	return_value = a + b;

	return return_value;
}
