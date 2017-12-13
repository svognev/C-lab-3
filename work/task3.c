#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0

int getMaxWord(char buf[], char word[])
{
	int flag = OUT;
	int i = 0, j = 0, k = 0;
	char max[64] = {'\0'};    // word of max length

	while (i < strlen(buf))
	{
		if (buf[i] != ' ' && flag == OUT)
		{					
			flag = IN;
			max[j] = buf[i];
			j++;
		}
		else if (buf[i] != ' ' && flag == IN)
		{			
			max[j] = buf[i];
			j++;
		}

		else if ((buf[i] == ' ' || buf[i] == '\0') && flag == IN)
		{
			flag = OUT;	
			j = 0;
		}
		if (strlen(max) > strlen(word))
		{
			for (k = 0; k <= strlen(max); k++)
				word[k] = max[k];
		}
		i++;		
	}
	return strlen(word);
}