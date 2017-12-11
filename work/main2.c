#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define BUF_SIZE 100

int main()
{
	char buf[BUF_SIZE + 1] = { '\0' };
	char word[BUF_SIZE + 1] = { '\0' };
	int i = 0, j = 0, inWord = 0, countWord = 0, lenWord = 0;

	printf("Enter your string: ");
	fgets(buf, BUF_SIZE, stdin);
	buf[BUF_SIZE - 1] = ' '; // remove '\0'
	buf[strlen(buf) - 1] = ' '; // remove '\n'
	
	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0) // word beginning
		{
			inWord = 1;
			lenWord = 1;
			word[j++] = buf[i];
		}
		else if (buf[i] == ' ' && inWord == 1) // word end
		{
			inWord = 0;
			word[j] = '\0';
			printf("%s, len = %d", word, lenWord);
			lenWord = j = 0;
			countWord++;
			putchar('\n');
		}
		else if (buf[i] != ' ' && inWord == 1) // inside word
		{
			word[j++] = buf[i];
			lenWord++;
		}
		i++;
	}

	printf("Number of words = %d\n", countWord);

	return 0;
}