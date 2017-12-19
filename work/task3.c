#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int i = 0, inWord = 0, lenWord = 0;
	int maxLenWord = 0, maxIdx = 0;

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0) // word beginning
		{
			inWord = 1;
			lenWord = 1;
			if (buf[i + 1] == '\0')
			{
				if (lenWord > maxLenWord)
				{
					maxLenWord = lenWord;
					maxIdx = i + 1;
				}
				inWord = lenWord = 0;
				break;
			}
		}
		else if (buf[i] == ' ' && inWord == 1) // word end
		{
			if (lenWord > maxLenWord)
			{
				maxLenWord = lenWord;
				maxIdx = i;
			}
			inWord = lenWord = 0;
		}
		else if (buf[i] != ' ' && inWord == 1) // inside word
		{
			lenWord++;
			if (buf[i + 1] == '\0')
			{
				if (lenWord > maxLenWord)
				{
					maxLenWord = lenWord;
					maxIdx = i + 1;
				}
				inWord = lenWord = 0;
				break;
			}
		}
		i++;
	}

	for (i = 0; i < maxLenWord; i++)
		word[i] = buf[maxIdx - maxLenWord + i];
	word[i] = '\0';

	return maxLenWord;
}