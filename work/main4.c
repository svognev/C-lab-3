#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
#define N 512

int main()
{
	char buf[N] = { '0' };
	printf("Enter a line:\n");
	fgets(buf, N, stdin);
	printf("%d\n", getSum(buf));
	return 0;
}