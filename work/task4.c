#define IN 0
#define OUT 1
 #include "task4.h"
 #include<stdio.h>
#include<string.h>
int getSum(char buf[])
 {
	int   i = 0, digit, count = 0, limit = LIMIT;
	unsigned long result = 0, sum = 0;
	digit = OUT;
	while (i<strlen(buf))
		 {
		if ((buf[i]) >= '0' && (buf[i] <= '9') && digit == OUT)// check digit
			 {
			digit = IN;
			result = 0;
			result = result * 10 + (buf[i] - '0');
			i++;
			count++;
			for (;(buf[i] >= '0' && (buf[i] <= '9') && digit == IN);)// the compilation digit
				 {
				result = result * 10 + (buf[i] - '0');
				count++;
					if (limit < count)
					 digit = OUT;
							//count++;
					i++;
				}
			digit = OUT;
			count = 0;
			sum += result;// summa of all digits
			}
		i++;
			}
	return sum;
	}