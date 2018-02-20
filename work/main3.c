#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[SIZE];
	char word[SIZE];
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	else
		buf[strlen(buf)] = ' ';
	printf("Max word: %s - %d\n", word, getMaxWord(buf, word));
	
	return 0;
}