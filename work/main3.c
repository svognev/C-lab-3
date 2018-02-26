# include <stdio.h>
# include <string.h>
# include "task3.h"
# define N 512

int main()

{
	char buf[N];
	char word[N];
	int max; //самое длинное слово

	puts("Enter a line , please:\n");
	fgets(buf, N, stdin);
	
	printf("%s - %d\n", word, getMaxWord(buf, word));
	return 0;
}