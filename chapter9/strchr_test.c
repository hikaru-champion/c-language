#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	char full_name[256] = "NIPPON Taro";
	char first_name[256] = "Hanako";
	char *ptr;

	// 名前の開始点を見つけて、ptrに保存する
	ptr = strchr(full_name, ' ');
	ptr++;

	strcpy(ptr, first_name); // TaroをHanakoに置き換えるために文字列のコピー

	printf("Full name = %s\n", full_name);

	return 0;
}
