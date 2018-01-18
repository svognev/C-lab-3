#include <stdio.h>
#include <string.h>
#include <conio.h>
#define SIZE 512


//Преобразование строки в signed long long int
signed long long int str_to_slli(char str[]) {
	unsigned int strLen = 0;
	unsigned int i = 0;

	//while (str[i] != '\0') 
	while ((str[i] >= 48 && str[i] <= 58) || ((str[i] == '-' || str[i] == '+') && i == 0))
	{
		strLen += 1;
		i++;
	}

	signed long long int num = 0;
	long long int ten;
	int signFlag = 1; //true: +, false: -

	for (i = 0; i < strLen; i++) {
		if (str[i] < '0' || str[i] > '9') 
		{
			if (i == 0 && str[i] == '-') 
			{
				signFlag = 0;
				continue;
			}
			if (i == 0 && str[i] == '+') 
			{
				signFlag = 1;
				continue;
			}
			return NULL;
		}

		ten = 1;
		for (unsigned int j = 0; j < strLen - 1 - i; j++) {
			ten *= 10;
		}

		num += ten * (str[i] - '0');
	}

	if (signFlag) 
	{
		return num;
	}
	else 
	{
		return -num;
	}
}

//нахождение суммы
int getSum(char buf[])	
{
	int sum = 0;	//Возращаемая сумма



	return sum;
}

int main()
{
	char buf[SIZE] = { 0 };	//Строка вводимая пользователем
	printf("Enter a text string: ");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = 0;
	printf("sum = %lli", str_to_slli(buf));



	_getch();
}