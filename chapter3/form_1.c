#include <stdio.h>

int
main(int argc, char * argv[]) {
	int a, b;
	int answer;

	a = 1;
	b = 1;
	answer = a + b;
	printf("%d + %d = %d\n", a, b, answer);

	a = 4;
	b = 2;
	answer = a - b;
	printf("%d - %d = %d\n", a, b, answer);

	a = 9;
	b = 9;
	answer = a * b;
	printf("%d * %d = %d\n", a, b, answer);

	a = 9;
	b = 3;
	answer = a / b;
	printf("%d / %d = %d\n", a, b, answer);

	a = 9;
	b = 2;
	answer = a % b;
	printf("%d %% %d = %d\n", a, b, answer);

	return 0;
}
