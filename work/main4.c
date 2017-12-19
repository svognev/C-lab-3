#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"
#define STR_LEN 100

int main()
{
	char buf[STR_LEN + 1] = { '\0' };
	printf("Enter your string: ");
	fgets(buf, STR_LEN, stdin);
	buf[STR_LEN - 1] = ' '; // remove '\0'
	buf[strlen(buf) - 1] = ' '; // remove '\n'

	printf("Sum = %d\n", getSum(buf));
	return 0;
}
