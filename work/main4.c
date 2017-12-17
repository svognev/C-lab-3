#include <stdio.h>

int main()
{
	char buf[256] = { '0' };
	printf("Enter some text with numbers: \n");
	fgets(buf, 256, stdin);
	printf("Sum of numbers in that line = %d\n", getSum(buf));
	return 0;
}