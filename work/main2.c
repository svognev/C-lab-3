#include <stdio.h>
#include <string.h>
#define SIZE 512
#define IN 1
#define OUT 0

int main()
{
	char buf[SIZE] = { 0 };
	int count = 0;
	int flag = OUT;
	int i = 0;

	printf("Enter a string for analysis: ");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = 0;

	while (1)
	{
		if ((buf[i] != ' ') && (buf[i] != 0) && (flag == OUT))
		{
			flag = IN;
		}

		if ((buf[i] != ' ') && (buf[i] != 0) && (flag == IN))
		{
			putchar(buf[i]);
			count++;
		}

		else if (((buf[i] == ' ') || (buf[i] == 0)) && flag == IN)
		{
			flag = OUT;
			printf(": %d\n", count);
			count = 0;
		}

		if (buf[i] == 0)
			break;

		i++;
	}
	return 0;
}