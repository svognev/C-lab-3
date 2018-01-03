#include <stdio.h>
#include "task4.h"

#define SIZE 256

int main()
{
	char buf[SIZE];
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	printf("Summa = %d\n", getSum(buf));

	return 0;
}