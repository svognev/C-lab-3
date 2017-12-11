#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0
#define SIZE 512

int main()
{
	char buf[SIZE];
	int i = 0, count = 0, letters = 0;
	int flag = OUT;

	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';
	putchar('\n');

	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			letters++;
			flag = IN;
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			letters++;
			putchar(buf[i]);
		}

		else if ((buf[i] == ' ') && flag == IN)
		{
			flag = OUT;
			printf(" - consists of %d letters \n", letters);	
			letters = 0;
		}		
		i++;
	}
	if (flag == IN)     // if the line don't have a gap in the end
	{
		printf(" - consists of %d letters \n", letters);
	}
	
	printf("You enter %d words\n", count);	

	return 0;
}

