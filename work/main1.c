#include<stdio.h>
#include<string.h>
#include "task1.h"
int main()
{
	char buf[SIZE];
	printf("Enter a line :\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';// change '\n' on  end of line
	printf("%d word\n", wordCount(buf));
	return 0;
}

