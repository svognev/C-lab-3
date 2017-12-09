#include "task4.h"
 #include<stdio.h>

int main()
{
	char buf[SIZE] = { ' ' };
	int lenght = 0;
	printf("Enter random set letters and digit, without gap : ");

	fgets(buf, SIZE, stdin);
		printf("\nSumma the all digit = %i\n", getSum(buf));
	return 0;
}