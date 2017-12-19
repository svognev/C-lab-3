int wordCount(char buf[])
{
	int i = 0, inWord = 0, count = 0;
	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			if (buf[i + 1] == '\0')
			{
				inWord = 0;
				count++;
				break;
			}
		}
		else if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			count++;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			if (buf[i + 1] == '\0')
			{
				inWord = 0;
				count++;
				break;
			}
		}
		i++;
	}
	return count;
}