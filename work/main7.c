#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define CH 123

int main()
{
	char buf[CH] = {0};
	int count[CH] = {0};
	int len, lenCh=0;
	int i = 0, k=0, j=0;
	int count_max = 0;
	char ch=0;
	
	printf("Enter string \n");
	fgets(buf, CH , stdin);
	
	while(buf[i]!='\n')
	{
			count[buf[i]]++;
			i++;
	}
	
	/*for (int i = 0; i < CH; i++)
		if (count[i] > 0)
			printf("%c - %d\n", i, count[i]);*/

	for (int j = 0; j < CH; j++)
		if (count[j] > 0)
			count_max++;
		
	int max = 0;
		
	//printf("count_max = %d \n",count_max);
	
	while (k<count_max)
	{
		for (int i = 0; i < CH; i++)
		{
			if (count[i] > 0)
			{
				 if (count[i] > max)
				{
					max = count[i];
					ch = i;
				}
			}
		}
		printf("%c - %d\n", ch, max);
		count[ch] = 0;
		max = 0;
				
		k++;
	} 
	
	return 0;
}
