#include <string.h>
#define IN 1
#define OUT 0

int wordCount(char buf[])
{
	int flag = OUT;
	int i = 0;
	int count = 0;

	buf[strlen(buf) - 1] = '\0'; //ydalenie \n

	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN; //voshli v slovo
		}
		else if (buf[i] == ' ' && flag == IN)
			flag = OUT; //vishli iz slova
		i++;
	}
	return count;
}