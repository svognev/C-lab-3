#include "task1.h"
#include <stdio.h>
//#include <string.h>
#define SIZE 512

int main()
{
	char buf[SIZE] = { 0, };	
	printf("Enter a string for analysis: ");
	fgets(buf, SIZE, stdin);
	printf("Word in string = %d\n", wordCount(buf));
	return 0;
}