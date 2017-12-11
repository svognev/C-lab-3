#include <limits.h>

int getSumMaxMin(int arr[], int N)
{
	int i = 0, sum = 0;
	int idxMax = 0, idxMin = 0;
	int valMax = INT_MIN, valMin = INT_MAX;
	int idxBeg = 0, idxEnd = 0;

	for (i = 0; i < N; i++)
	{
		if (arr[i] > valMax)
		{
			valMax = arr[i];
			idxMax = i;
		}
		if (arr[i] < valMin)
		{
			valMin = arr[i];
			idxMin = i;
		}
	}

	idxBeg = (idxMax < idxMin) ? idxMax : idxMin;
	idxEnd = (idxMax < idxMin) ? idxMin : idxMax;

	for (i = (idxBeg + 1); i < idxEnd; i++)
		sum += arr[i];

	return sum;
}