#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#define M 200

int main()
{
	char buf[M] = { 0 };

	printf("Hello! Pls, enter something\n");
	fgets(buf, M, stdin);
	printf("Koli4estvo slov: %d\n", wordCount(buf));

	return 0;
}