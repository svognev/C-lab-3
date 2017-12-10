#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int main()
{
	int slovo, count = 0, len=0;
	char buf[N] = { 0 };
	char word[N] = { 0 };
	int inWord = 0;
	int i = 0, j=0;

	printf("Enter line \n");
	fgets(buf, N, stdin);
	len = strlen(buf);
	buf[len - 1] = ' ';
	
	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			len = 1;
			word[j++] = buf[i];
		}
		else if ((buf[i] == ' ') && (inWord == 1))
		{
			inWord = 0;
			if (j == len)    
			{
				count++;
				word[j++] = '\0';
				printf("%s - %d\n", word, len);
			}
			len = j = 0;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			word[j++] = buf[i];
			len++;
		}
		i++;
	}
	
	printf("Number of words - %d\n", count);
	putchar('\n');

	return 0;
}
