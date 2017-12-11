int getSumInt(int arr[], int N)
{
	int i = 0, sum = 0;
	int idxPos = 0, idxNeg = 0, isNegFound = 0;
	
	for (i = 0; i < N; i++)
	{
		if (arr[i] < 0 && !isNegFound)
		{
			idxNeg = i;
			isNegFound = 1;
		}
		if (arr[i] > 0)
			idxPos = i;
	}

	for (i = (idxNeg + 1); i < idxPos; i++)
		sum += arr[i];

	return sum;
}