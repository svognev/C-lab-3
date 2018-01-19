#include<stdlib.h>
#include<stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int summ = 0, i ,max , min ,positionMax=0,positionMin=0, positionLeft = 0, positionRight = 0;
	min=max = arr[0];
		for (i=0;i < N;i++)
	{
			
			if (max < arr[i])// lookout the largerest number
			{
				max = arr[i];
				positionMax = i;//number of array = max
			}
			else if(min > arr[i])// lookout the smallerest number
			{
				min = arr[i];//number of array = min
				positionMin = i;
			}
			
	}
		

		if (positionMin < positionMax)
		{
			 positionLeft = positionMin;
			 positionRight =positionMax;
		}
		else
		{	
			positionLeft = positionMax;
			positionRight = positionMin;
		}
		positionLeft++;
		while (positionLeft <positionRight)
		{
			summ += arr[positionLeft];
			printf(" %i", arr[positionLeft]);//2 part. it's need for imaging solutions
			positionLeft++;
		}

	return summ;
}

