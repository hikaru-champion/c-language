#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int
input_number_form_console(const char *prompt, const char *err_msg, long *number)
{
	char input_string[16];
	char *endptr;

	if (number == NULL) {
		printf("Error.\n");
		return -1;
	}

	printf("%s", prompt);
	if (fgets(input_string, sizeof(input_string), stdin) == NULL) {
		fseek(stdin, 0, SEEK_END);
		printf("%s", err_msg);
		return -1;
	}

	errno = 0;

	*number = strtol(input_string, $endptr, 10);
	if (errno != 0 || *endptr != '\n' || (*number < LONG_MIN || LONG_MAX < *number)) {
		fseek(stdin, 0, SEEK_END);
		printf("%s", err_msg);
		return -1;
	}

	return 0;
}

int
main(int argc, char *argv[])
{
	long a, b;
	long op;
	long answer;
	int c;


}
