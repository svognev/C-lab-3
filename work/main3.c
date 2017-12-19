#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char buf[256];
	char word[64] = {'\0'};
	puts("Enter a line, please: ");
	fgets(buf, 256, stdin);
	buf[strlen(buf) - 1] = '\0';

	printf("The longest word %s of %d letters\n", word, getMaxWord(buf, word));
	return 0;
}