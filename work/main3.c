#include "task3.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE_STR 2048
#define SIZE_WORD 86

int main()
{
	char buf[SIZE_STR] = { 0 };
	char word[SIZE_WORD] = { 0 };

	printf("Enter a text string: ");
	fgets(buf, SIZE_STR, stdin);
	printf("\"%s\"\t%d char\n", word, getMaxWord(buf, word));
	return 0;
}