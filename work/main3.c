#include <stdio.h>
#include <string.h>
#include <ctype.h>
# include "task3.h"
# define SIZE 100

int main()

{
	int letters;
	char word[SIZE] = {'\0'};
	char buf[SIZE * 10] = {'\0'};

	puts("Enter your string:");
	fgets(buf, SIZE * 10, stdin);
	letters = getMaxWord(buf, word);
	printf("%s - %d\n", word, letters);
	
	return 0;
}