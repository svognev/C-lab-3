#include <stdlib.h>
#include <stdio.h>
int getSum(char buf[])// нахождение суммы
{
	int sum = 0, i = 0, n = 0, len = 0;
		
	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			n = n * 10 + (buf[i] - '0'); // перевод строки в число
			len++;
		}
		if (len == 3)// ddd - ограничитель разрядов
		{
			sum += n;
			n = len = 0;
		}

		if (len < 3 && (buf[i+1] >= 'A' && buf[i+1] <= 'z')||(buf[i + 1] == '\0' || buf[i + 1]=='\n'))
		{
			sum = sum + n;
			n = 0;
		}
		i++;
	}
	return sum;
}