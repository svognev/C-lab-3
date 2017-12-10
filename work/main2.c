/*Программа, которая для введённой строки определяет количество слов
  и выводит каждое слово на отдельной строке, а также выводит его длину.*/

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <ctype.h>  //for isspace()
#define SIZE 1000
#define IN 1
#define OUT 0

int main()
{
	char buf[SIZE];
	int flag = OUT;
	int words = 0;  //counter for words
	int letters = 0;
	int i = 0;
	
	printf("Enter the string: \n");
	fgets(buf, SIZE, stdin);
	printf("\n");
	buf[strlen(buf) - 1] = '\0';  //удаление \n
	while (buf[i])
	{
		if (!isspace(buf[i]) && flag == OUT)
		{
			
			words++; 
			flag = IN;  //вошли в слово
			putchar(buf[i]);
			letters++;
			
		}
		else if (!isspace(buf[i]) && flag == IN)  //внутри слова
		{
			putchar(buf[i]);
			letters++;
		}
		else if (isspace(buf[i]) && flag == IN)
		{
			flag = OUT;  //вышли из слова
			//putchar('\n');
			printf(" - %d \n\n", letters);
			letters = 0;
		}
		i++;
		

	}
	if (flag == IN)
	{
		printf(" - %d \n\n", letters);
	}
	letters = 0;
	putchar('\n');
	printf("Number of words is: %d \n\n", words);
	return 0;
}
		/*
		else if (isspace(buf[i]) && flag == IN)
			flag = OUT;  //вышли из слова
		i++;
	}
	printf("\nNumber of words is: %d \n\n", buf);
	*/


	/*
	while (buf[i])
	{
		if (!isspace(buf[i]) && flag == OUT)
		{
			words++;
			flag = IN;  //вошли в слово
		}
		else if (isspace(buf[i]) && flag == IN)
			flag = OUT;  //вышли из слова
		i++;
	}
	printf("\nNumber of words is: %d \n\n", buf);
	*/
	

	//printf("%d \n", letters);