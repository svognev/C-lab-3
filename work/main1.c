#include "task1.h"
#include <stdio.h>
#define SIZE 1024

int main()
{
	char buf[SIZE];	
	printf("Enter a string for analysis: ");
	fgets(buf, SIZE, stdin);
	printf("Word in string = %d\n", wordCount(buf));
	return 0;
}