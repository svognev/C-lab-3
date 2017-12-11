#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0

int wordCount(char buf[]) 
{
	int flag = OUT;
	int i = 0, count = 0;

	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN; 
		}
		else if (buf[i] == ' ' && flag == IN)
			flag = OUT; 
		i++;
	}
	return count;
}

