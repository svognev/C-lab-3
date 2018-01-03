#include <stdio.h>
#define SIZE 256
#define IN 1
#define OUT 0

int main()
{
	int i = 0, j = 0, len = 0;
	int inWord = OUT; 
	char buf[SIZE];
	char word[SIZE];
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = ' ';

	while (buf[i])
	{
		if (buf[i] != ' '&& inWord == OUT)
		{
			inWord = IN; 
			len = 1;
			word[j++] = buf[i];
		}
		else if (buf[i] != ' '&& inWord == IN)
		{
			word[j++] = buf[i];
			len++;
		}
		else if (buf[i] == ' '&& inWord == IN)
		{
			inWord = OUT;
				word[j] = '\0';
				printf("%s - %d\n", word, len);
			len = j = 0;
		}
		i++;
	}
	return 0;
}