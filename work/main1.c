#include <stdio.h>
#include "task1.h"

int main()
{
 
	char buf[SIZE];
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	else 
		buf[strlen(buf)] = ' ';
	printf("You have %d words\n" ,wordCount(buf));

	return 0;
}