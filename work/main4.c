#include "task4.h"
#include<stdio.h>
#include<string.h>
int main()
{
	char buf[SIZE] = { ' ' };
	int lenght = 0;
	printf("Enter random set letters and digit, without gap : ");

	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';


	printf("\nSumma the all digit = %i\n", getSum(buf));
	return 0 ;
}