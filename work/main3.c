#include "task3.h"
#include <stdio.h>
#define SIZE 256

int main()
{
	char arr[SIZE];
	char word[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(arr, SIZE, stdin);
	int len=getMaxWord(arr, word);
	printf("Word has most number of symbols - %s - %d symbols\n", word, len);
	return 0;
}