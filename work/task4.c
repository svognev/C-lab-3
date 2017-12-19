#include "task4.h"

int isCharNum(char c)
{
	return (c >= '0') && (c <= '9');
}

int getSum(char buf[])
{
	int i = 0, inGroup = 0, sum = 0;
	int lenGroup = 0, valueGroup = 0;

	while (buf[i])
	{
		if (isCharNum(buf[i]) && inGroup == 0) // group beginning
		{
			inGroup = 1;
			lenGroup = 1;
			valueGroup = valueGroup * 10 + buf[i] - '0';
			if ((lenGroup % GROUP_LEN) == 0)
			{
				sum += valueGroup;
				valueGroup = 0;
			}
		}
		else if (!isCharNum(buf[i]) && inGroup == 1) // group end
		{
			sum += valueGroup;
			inGroup = 0;
			lenGroup = valueGroup = 0;
		}
		else if (isCharNum(buf[i]) && inGroup == 1) // inside group
		{
			lenGroup++;
			valueGroup = valueGroup * 10 + buf[i] - '0';
			if ((lenGroup % GROUP_LEN) == 0)
			{
				sum += valueGroup;
				valueGroup = 0;
			}
		}
		i++;
	}

	return sum;
}