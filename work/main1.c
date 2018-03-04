#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "task1.h"
#define SIZE 1000

int main()
{
	char buf[SIZE];
	int words;

	puts("Enter your text:");
	fgets(buf, 1000, stdin);
	buf[strlen(buf) - 1] = '\0';
	if (words = wordCount(buf))
		printf("\nYou have %d %s.\n\n", words, words == 1 ? "word" : "words");
	else
		puts("There are no words.\n");
	return 0;
}