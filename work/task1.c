#include "task1.h"
#define OUT 0//if inside of the word
#define IN 1//if outside of the word
int wordCount(char buf[])// calulation word
{
	int i=0,count=0;
	int flag;
	flag = OUT;
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;// count a word
			flag = IN;//enter inside a word
		}
		else
		{
			if (buf[i] == ' ' &&flag == IN)
				flag = OUT;// exit outside a word
			i++;
		}

	}
	
	
	return count;
}