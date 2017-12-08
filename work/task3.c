#include "tasK3.h"
#define OUT 0//if inside of the word
#define IN 1//if outside of the word
#include<stdio.h>
int getMaxWord(char buf[], char word[])
{
		int i,j, count,len, max;
		j=i = count = len = max = 0;
		int flag;
		flag = OUT;
		char wordCheck[SIZE] = { ' ' };
		while (buf[i])
		{
			if (buf[i] != ' ' && flag == OUT)
			{
				wordCheck[j++] = buf[i];// following record the letters
				len++;
				flag = IN;//enter inside a word
			} else if (buf[i] != ' ' && flag == IN)
			{
				wordCheck[j++] = buf[i];// following record the letters
				len++;
			} else if (buf[i] == ' ' &&flag == IN)
			{		flag = OUT;// exit outside a word
				
			if (len > max)
				{
					max = len;
					wordCheck[j] = '\0';
					sprintf(word, "%s", wordCheck);


				}
				len = j = 0;
				
			}

i++;
		}

		if (flag == IN)//it's if need condition on last word
		{
			{
				if (len > max)
				{
					max = len;
					wordCheck[j] = '\0';
					sprintf(word, "%s", wordCheck);


				}
			}

		}
		
		return	max;
}