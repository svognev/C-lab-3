#define IN 1
#define OUT 0

int wordCount(char buf[])
{
	int flag = OUT;
	int i = 0;
	int count = 0;

	while (buf[i])
	{

		if (buf[i] != ' '  && flag == OUT)
		{
			count++;
			//dlina++;
			flag = IN; //voshli v slovo
			//putchar(buf[i]);
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			//dlina++;
			//putchar(buf[i]); // vnutri slova
		}
		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT; //vishli iz slova
			//printf(" Dlina slova: %d\n\n", dlina);
			//dlina = 0;
		}
		i++;
	}
	return count;
}