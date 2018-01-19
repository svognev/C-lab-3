#include<stdio.h>
#define SIZE 512
#include<string.h>
int maxCount(int *count,int lenght)
{
	int i,j=0, max = 0;
	int result[SIZE][2] = {0} ;
	for (i=0;i<SIZE;i++)
	{
		if (count[i] > max)
		{
			max = count[i];
		}
		
	}
	i = 0;
	while (max>0)
	{
		while (i<SIZE&&j<lenght)
		{
			if (count[i] == max && i<SIZE&&j<lenght)
			{
				max = count[i];
				
				result[j][0] = i;
				result[j][1] = count[i];
				j++;
			}
			i++;

		}
		
		max--;
i = 0;
	}
	int *presult=result;
	return presult;
}

int main()
{
	int i=0,j=0,j1=0,j2=0;
	int count[SIZE] = {0};
	char buf[SIZE] = {' '};
	unsigned int result[SIZE][2] = {0};
	printf("Entered string for :\n");
	fgets(buf, SIZE, stdin);
	while(buf[i]!='\n')
	{
		i++;
	}
	buf[i] = '\0';
	i = 0;
	while (buf[i])
	{
		count[buf[i++]]++;
	}
	j = 0;
	
	int	*presult = maxCount(count, i);
	//result[0][0] = presult;
	j1 = 1;
	while (j2 < SIZE)
	{	

	result[j2][0] = *(presult+j);
	result[j2][1] = *(presult + j1);
j=j+2;
j1 = j1 + 2;
j2++;
	}
	j = 0;
	
	printf("\n symbol and its amount     sorting in descending order");
	for (i = 0;i < SIZE;i++)
	{
		if (count[i] > 0)
		{
			printf("\n %c -   %2.d \t\t\t %c -  %2.d", i, count[i], result[j][0],result[j][1]);
		j++;
		}
	}
	printf("\n");
	return 0;
}


