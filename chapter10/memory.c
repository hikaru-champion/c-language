#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	char *one_string;

	// わざとメモリ確保を失敗させる
	one_string = malloc(0xffffffffffffffff);
	if (one_string == NULL) {
		printf("Memory allocation error!\n");
	}
	printf("one_string=%p\n", one_string);
	free(one_string);

	one_string = malloc(14); // 14バイト確保
	if (one_string == NULL) {
		printf("Memory allocation error!\n");
		return -1;
	}
	// 確保したメモリのポインタを表示
	printf("one_string=%p\n", one_string);

	strncpy(one_string, "hello, world\n", 14 - 1); //文字列をコピー
	one_string[14 - 1] = '\0';

	printf("%s", one_string); // 文字列の表示

	printf("one_string=%p\n", one_string);
	free(one_string);
	// 確保したメモリのポインタを表示
	printf("one_string=%p\n", one_string);

	return 0;
}
