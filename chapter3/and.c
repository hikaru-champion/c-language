#include <stdio.h>

int
main(int argc, char *argv[])
{
	unsigned char a;
	unsigned char b;

	a = 192;
	b = 255;
	printf("first octet is %u\n", a & b);

	a = 168;
	b = 255;
	printf("second octet is %u\n", a & b);

	a = 0;
	b = 255;
	printf("third octet is %u\n", a & b);

	a = 1;
	b = 0;
	printf("fourth octet is %u\n", a & b);

	return 0;
}
