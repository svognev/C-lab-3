#include "task3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_STR 2048
#define SIZE_WORD 86

int main()
{
	char buf[SIZE_STR];
	char word[SIZE_WORD];

	printf("Enter a text string: ");
	fgets(buf, SIZE_STR, stdin);
	printf("\"%s\"\t%d char\n", word, getMaxWord(buf, word));
	return 0;
}