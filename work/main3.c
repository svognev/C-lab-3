#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char buf[512] = { 0 };
	char word[512];

	printf("Enter a line, please:\n");
	fgets(buf, 512, stdin);
	putchar ('\n');
	printf("samoe dlinnoe slovo: %s Dlina: %d\n", &word, getMaxWord(buf,word));
	return 0;
}