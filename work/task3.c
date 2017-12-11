int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0, inWord = 0, countWord = 0, lenWord = 0;
	int maxLenWord = 0, maxIdx = 0;

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0) // word beginning
		{
			inWord = 1;
			lenWord = 1;
		}
		else if (buf[i] == ' ' && inWord == 1) // word end
		{
			if (lenWord > maxLenWord)
			{
				maxLenWord = lenWord;
				maxIdx = i;
			}
			inWord = lenWord = j = 0;
			countWord++;
		}
		else if (buf[i] != ' ' && inWord == 1) // inside word
			lenWord++;
		i++;
	}

	for (i = 0; i < maxLenWord; i++)
		word[i] = buf[maxIdx - maxLenWord + i];

	return maxLenWord;
}