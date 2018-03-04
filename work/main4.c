#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "task4.h"
#define SIZE 1000

int main()
{
	char buf[SIZE];
	printf("Enter your string:\n");
	fgets(buf, SIZE, stdin);
	printf("\nSum = %d\n\n", getSum(buf));

	return 0;
}