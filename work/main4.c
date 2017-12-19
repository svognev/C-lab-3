#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"
#define SIZE 256

int main() 
{
	char buf[SIZE];
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';

	printf("The sum of the numbers of line: %d\n", getSum(buf));

	return 0;
}
