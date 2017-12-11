#define IN 1
#define OUT 0
#include <string.h>

int wordCount(char buf[])
{
	int i = 0;
	int counter = 0;
	short int flag = OUT;
	int size = strlen(buf);
	buf[size - 1] = '\0';
	while (buf[i])
	{
		if (buf[i] != ' ')
		{
			if (flag == OUT)
				counter++;
			flag = IN;
			
		}
		else
		{
			flag = OUT;
			
		}
		i++;
	}
	return counter;
}