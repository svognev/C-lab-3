#include <string.h>
#include "task1.h"

int wordCount(char buf[])//������� ���������� ����
{
	buf[512];
	int flag = OUT;
	int i = 0;
	int count = 0;

	buf[strlen(buf) - 1] = '\0'; // �������� \n
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN; //����� � �����
		}
		else if (buf[i] == ' ' && flag == IN)
			flag = OUT; // ����� �� �����
		i++;
	}
	return count;
}