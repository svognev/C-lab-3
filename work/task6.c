#include<stdlib.h>
#include<stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int summ = 0, i ,max , min ,PositionMax=0,PositionMin=0, PositionLeft = 0, PositionRight = 0;
	min=max = arr[0];
		for (i=0;i < N;i++)
	{
			
			if (max < arr[i])// lookout the largerest number
			{
				max = arr[i];
				PositionMax = i;//number of array = max
			}
			else if(min > arr[i])// lookout the smallerest number
			{
				min = arr[i];//number of array = min
				PositionMin = i;
			}
			
	}
		

		if (PositionMin < PositionMax)
		{
			 PositionLeft = PositionMin;
			 PositionRight =PositionMax;
		}
		else
		{	
			PositionLeft = PositionMax;
			PositionRight = PositionMin;
		}
		PositionLeft++;
		while (PositionLeft <PositionRight)
		{
			summ += arr[PositionLeft];
			printf(" %i", arr[PositionLeft]);//2 part. it's need for imaging solutions
			PositionLeft++;
		}

	return summ;
}

