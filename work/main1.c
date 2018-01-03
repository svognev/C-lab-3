#include <stdio.h>
#include "task1.h"

int main()
{
 
	char buf[SIZE];
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = ' ';
	printf("You have %d words\n" ,wordCount(buf));

	return 0;
}