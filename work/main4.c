#include "task4.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define SIZE 512

int main()
{
	char buf[SIZE];	//Строка вводимая пользователем
	int suma = 0;
	printf("Enter a text string: ");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = 0;
	suma = getSum(buf);
	printf("sum = %d\n", suma);
	_getch();
	return 0;
}