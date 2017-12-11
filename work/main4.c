#include "task4.h"
#include <stdio.h>
#define SIZE 256

int main()
{
	char arr[SIZE];
	printf("Enter a string:\n");
	fgets(arr, SIZE, stdin);
	printf("Sum of numbers - %d\n", getSum(arr));
	return 0;
}