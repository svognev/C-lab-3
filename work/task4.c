#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define NUM 1        // number
#define CHAR 0	     // char
#define SIZE 64

int getSum(char buf[]) 
{	
	int flag = CHAR;
	int i = 0, count = 0, sum = 0;
	char num[SIZE] = {'\0'};          

	while (buf[i]) 
	{
		if (isdigit(buf[i]) && flag == CHAR)
		{
			flag = NUM;						
			while (isdigit(buf[i]))
			{	
				num[count] = buf[i];
				count++;				
				i++;
				if (count == 9) 
					break;
			}
			sum = sum + atoi(num);

			flag = CHAR;				
			for (int k = 0; k <= count; k++)        // cleaning of temporary array
			{
				num[k] = 0;
			}
			count = 0;			
		}		
		else if (!isdigit(buf[i]) && flag == CHAR)
			i++;		
	}
	return sum;
}
