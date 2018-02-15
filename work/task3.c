#include <string.h>
#include <ctype.h>
#define IN 1
#define OUT 0

int getMaxWord(char buf[], char word[])
{
	int flag = OUT;
	int i = 0;
	int j = 0;
	int c = 0;
	int max = 0;
	int dlina = 0;
	char slovo[512] = { 0 };

	while (buf[i])
	{

		if ( !isspace(buf[i])  && flag == OUT)
		{
			dlina++;
			slovo[j] = buf[i];
			j++;
			flag = IN; //voshli v slovo
			
		}
		else if (!isspace(buf[i]) && flag == IN)
		{
			dlina++;
			slovo[j] = buf[i]; // vnutri slova
			j++;
		}
		else if (isspace(buf[i]) && flag == IN)
		{
			flag = OUT; //vishli iz slova
			if (dlina >= max)
			{
				max = dlina;
				for (c = 0; c < j; c++)
				{
					word[c] = slovo[c];
					word[c + 1] = '\0';
				}
			}
			j = 0;
			dlina = 0;
		}
		i++;
	}
	return strlen(word);
}