#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256];
	int inWord = 0;
	int count = 0;
	int i = 0, j = 0;
	//count for words, j for letters

	printf("Enter a text: \n");
	fgets(buf, 256, stdin);
	buf[strlen(buf) - 1] = '\0';

	while (i < strlen(buf))
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			count++;
			j++;
			inWord = 1;
			putchar(buf[i]);
		}
		else  if (buf[i] != ' ' && inWord == 1)
		{
			j++;
			putchar(buf[i]);
		}
		else  if ((buf[i] == ' ' || buf[i] == '\0') && inWord == 1)
		{
			inWord = 0;
			printf(" there are %d letters\n", j);
			j = 0;
		}
		else  if (buf[i] == '\0')
		{
			putchar('\n');
			break;
		}
		i++;
	}
	printf("There are %d words.\n", count);

	return 0;
}