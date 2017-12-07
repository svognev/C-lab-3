#include "task1.h"
#include <stdio.h>
#define SIZE 256

int main()
{
	char arr[SIZE];
	printf("Enter a string:\n");
	fgets(arr, SIZE, stdin);
	printf("Amount of words: %d\n", wordCount(arr));
	return 0;
}