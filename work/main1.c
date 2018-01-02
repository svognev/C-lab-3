#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"

int main()
{
	char buf[512] = { 0 };

	printf("Hello! Pls, enter something\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = '\0'; //ydalenie \n
	printf("Koli4estvo slov: %d\n", wordCount(buf));
	return 0;
}