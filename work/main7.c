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
		count[buf[i] - ' ']++;// ������� ���������� ���������� � ������ � count �������� ������� � ��������������� ����� - " "
		i++;
	}
		for (i = 0; i < N; i++)
		{
			if (count[i] > max)//���� ������� � ������������ ����������� (256 ���)
				max = count[i];//����������
		}

		while (max > 0)// "����������� ����"
		{

			for (int k = 0; k < N; k++)
			{
				if (count[k] == max) // ������� ������� � ����� ������� ����������� ����������� (256 ���)
					printf("%c-%d\n", k + ' ', count[k]);
			}
			max--; //���� ��������� �� ����� ������� �� �������
		}
		return 0;
}