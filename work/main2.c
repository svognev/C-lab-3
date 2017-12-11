
#include <stdio.h>
#define SIZE 256
#define IN 1
#define OUT 0
#include <string.h>

int main()
{
	char buf[SIZE];
	printf("Enter a string:\n");
	fgets(buf, SIZE, stdin);
	int i = 0;
	int countWord = 0;
	int countSymbol = 0;
	short int flag = OUT;
	int size = strlen(buf);
	buf[size - 1] = '\0';
	while (buf[i])
	{
		if (buf[i] != ' ')
		{
			if (flag == OUT)
			{
				countWord++;
			}
				
			putchar(buf[i]);
			countSymbol++;
			flag = IN;
		}
		else
		{
			if (flag == IN)
			{
				printf(" - %d\n", countSymbol);
				countSymbol = 0;
			}
			flag = OUT;
		}
		i++;
	}

	if (flag==IN)
		printf(" - %d\n", countSymbol);
	printf("Amount of words: %d\n", countWord);

	return 0;
}
