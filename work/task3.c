#define IN 1
#define OUT 0
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int i = 0;
	int max = 0;
	char* position = buf;
	char* positionMax;
	int countSymbol = 0;
	short int flag = OUT;
	int size = strlen(buf);
	buf[size - 1] = '\0';
	while (buf[i])
	{
		if (buf[i] != ' ')
		{
			if (flag == OUT)
				position=(buf+i);
			flag = IN;
			countSymbol++;
		}
		else
		{
			flag = OUT;
			if (countSymbol > max)
			{
				max = countSymbol;
				positionMax = position;
			}
			countSymbol = 0;
		}
		i++;
	}

	if (flag = IN && (countSymbol > max))
	{
			max = countSymbol;
			positionMax = position;
	}

	for (i = 0; i < max; i++)
	{
		word[i] = *(positionMax + i);
	}
	word[i] = '\0';
	return max;
}