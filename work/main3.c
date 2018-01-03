#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[SIZE];
	char word[SIZE];
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = ' ';
	printf("Max word: %s - %d\n", word, getMaxWord(buf, word));
	
	return 0;
}