#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0

int main()
{
	char buf[512] = { '0' };
	char word[512] = { '\0' };
	int flag = OUT;
	int i,j,len = 0;

	printf("Enter a line, please:\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = '\0';
	
	printf("%s is the longest word with %d symbols\n", &word, getMaxWord(buf, word));

	return 0;
}