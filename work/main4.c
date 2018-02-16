#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"

int main()
{
	char buf[512] = { 0 };
	
	printf("Enter a line, please:\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = ' '; //ydalenie \n

	putchar('\n');
	printf("summa chisel: %d\n", getSum(buf));
	return 0;
}