#include <string.h>
#define IN 1
#define OUT 0

int wordCount(char buf[])
{
	int flag = OUT;
	int i = 0;
	int count = 0;

	buf[strlen(buf) - 1] = '\0';

	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			flag = IN;
			count++;
		}
		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT;
		}
		i++;
	}
	return count;
}