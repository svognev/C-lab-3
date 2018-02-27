#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000
#define N 256

int main()
{
	char buf[SIZE] = { 0 };
	int count[N] = { 0 };
	int i = 0, max = 0;

	printf("Please, enter your line:\n ");
	fgets(buf, SIZE, stdin);

	while (buf[i] != '\0')
	{
		count[buf[i] - ' ']++;// считаем количество повторений и ставим в count напротив символа с соответствующим кодом - " "
		i++;
	}
		for (i = 0; i < N; i++)
		{
			if (count[i] > max)//ищем элемент с максимальным повторением (256 раз)
				max = count[i];//записываем
		}

		while (max > 0)// "отбрасываем нули"
		{

			for (int k = 0; k < N; k++)
			{
				if (count[k] == max) // выводим элемент с самым большим количеством повоторений (256 раз)
					printf("%c-%d\n", k + ' ', count[k]);
			}
			max--; //ищем следующий за самым большим по порядку
		}
		return 0;
}