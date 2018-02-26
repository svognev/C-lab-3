#include <stdlib.h>
#include <stdio.h>
#include "task4.h"
#define SIZE 512


int main()
{
	char buf[SIZE] = { 0 };
	int sum = 0;

	puts("Enter a line , please:\n");
	fgets(buf, SIZE, stdin);

		printf("->%d\n", getSum(buf));
		return 0;
}
