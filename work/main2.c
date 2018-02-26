# include <stdio.h>
# include <string.h>
# define IN 1
# define OUT 0
# define LEN 5
# define N 512

int main()
{
	int i = 0, j = 0, len = 0; int count = 0;
	int inword = OUT; // признак слова
	char buf[N];
	char word[N];

	puts("Enter a line , please:\n");
	fgets(buf, N, stdin);
	buf[strlen(buf) - 1] = ' ';

	while (buf[i])
	{
		if (buf[i] != ' ' && inword == OUT)
		{
			inword = IN;
			count ++;
		}
		if (buf[i] != ' ')
		{
			word[j++] = buf[i];
			len++;
		}
		else if (buf[i] == ' ' && inword == IN)
		{
			inword = OUT;
				word[j] = '\0';
				printf("%s\t - %d\n", word,len);

			len = j = 0;
		}
		i++;
	}
	printf("%d words\n", count);
	return 0;
}