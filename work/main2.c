#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0

int main()
{
	char buf[512];
	int flag = OUT;
	int i = 0;
	int count = 0;

	printf("Enter a line, please:\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = '\0';
	int j = 0;
	while (i < strlen(buf))
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			j++;
			flag = IN;
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			j++;
			putchar(buf[i]);
		}
		else if ((buf[i] == ' ' || buf[i] == '\0') && flag == IN)
		{
			flag = OUT;
			printf(" letters: %d \n", j);
			j = 0;
		}
		else if (buf[i] == '\0')
		{
			putchar('\n');
			break;
		}
		i++;
		
	}

	printf("%d words\n", count);

	return 0;
}