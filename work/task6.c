#include<stdlib.h>
#include<stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int summ = 0, i ,max , min ,j=0,k=0;
	min=max = arr[0];
		for (i=0;i < N;i++)
	{
			
			if (max < arr[i])// lookout the largerest number
			{
				max = arr[i];
				j = i;//number of array = max
			}
			else if(min > arr[i])// lookout the smallerest number
			{
				min = arr[i];//number of array = min
				k = i;
			}
			
	}
		
		i--;// the found number is not taken into account

		if (k < j)
		{
			j--;
			while (k++ < j)
			{
				summ += arr[k];
				//printf(" %ik", arr[k]);//2 part. it's need for imaging solutions
			}
		}
		else
		{
			k--;
			while (j++ < k)
			{
				summ += arr[j];
				//printf(" %ij", arr[j]);//2 part. it's need for imaging solutions
			}
		}

	return summ;
}

