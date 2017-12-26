#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char buf[512] = { 0 };
	char word[512] = { 0 };

	printf("Enter a line, please:\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = '\0'; //ydalenie \n

	putchar ('\n');
	printf("samoe dlinnoe slovo: %s Dlina: %d\n", &word, getMaxWord(buf,word));
	return 0;
}