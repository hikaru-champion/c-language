#include <stdio.h>

int
main(int argc, char * argv[])
{
	int i, j, end;
	int flag_not_prime;

	end = 100;

	for (i = 1; i <= end; i++) {
		flag_not_prime = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag_not_prime = 1;
				break;
			}
		}
		if (i == 1) {
			continue;
		}
		if (flag_not_prime == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
