#include <stdio.h>
#include <string.h>
#include "task1.h"


int main()
{
	char buf[512];

	printf("Enter a line, please:\n");
	fgets(buf, 512, stdin);

	printf("%d words\n", wordCount(buf));
	return 0;
}