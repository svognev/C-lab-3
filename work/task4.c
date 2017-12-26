#define IN 1
#define OUT 0
#define MAX 5//razryadnost' 

int str2int(char *buf)
{
	unsigned int value = 0;
	int i = 0;
	while (buf[i])
	{
		value = value * 10 + buf[i] - '0';
		i++;
		if (i == 9)
			break;
	}
	return value;
}

int getSum(char buf[])
{
	int flag = OUT;
	int i = 0;
	int j = 0;
	int sum = 0;
	int c = 0;
	char plus[10] = { 0 };

	while (buf[i])
	{

		if ((buf[i] >= '0' && buf[i] <= '9') && flag == OUT && j<MAX)
		{
			plus[j] = buf[i];
			j++;
			flag = IN; //voshli v chislo
		}
		else if ((buf[i] >= '0' && buf[i] <= '9') && flag == IN && j<MAX)
		{
			plus[j] = buf[i]; // vnutri chisla
			j++;
		}
		else if ((buf[i] <= '0' || buf[i] >= '9') && flag == IN) 
		{
			flag = OUT; //vishli iz chisla
			sum = sum + str2int(plus);
			j = 0;
			for (int c = 0; c < 10; c++)
				plus[c] = '\0';
		}
		else if ((buf[i] >= '0' && buf[i] <= '9') && flag==IN && j >= MAX)
		{
			sum = sum + str2int(plus);
			j = 0;
			i--;
			flag = OUT;
			for (int c = 0; c < 10;c++)
				plus[c] = '\0';
		}
	i++;
	}
	return sum;
}