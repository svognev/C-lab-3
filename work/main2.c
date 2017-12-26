#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0

int main()
{
	char buf[512] = { 0 };
	int flag = OUT;
	int i = 0;
	int count = 0;
	int dlina = 0;

	printf("Enter a line, please:\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = ' '; //ydalenie \n

	while (buf[i])
	{

		if (buf[i] != ' '  && flag == OUT)
		{
			count++;
			dlina++;
			flag = IN; //voshli v slovo
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			dlina++;
			putchar(buf[i]); // vnutri slova
		}
		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT; //vishli iz slova
			printf(" Dlina slova: %d\n\n", dlina);
			dlina = 0;
		}
		i++;
	}
	putchar('\n');
	printf("%d words\n", count);
	return 0;
}