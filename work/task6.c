

int getSumMaxMin(int arr[], int N)
{
	int i = 0;
	int min = arr[0];
	int max = arr[0];
	int positionMin = 0;
	int positionMax = 0;
	int sum = 0;
	while (i < N)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			positionMax = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			positionMin = i;
		}
		i++;
	}

	if (positionMax>positionMin)
		for (i = positionMin+1; i <= positionMax-1; i++)
			sum = sum + arr[i];
	else if (positionMax < positionMin)
		for (i = positionMax + 1; i <= positionMin-1; i++)
			sum = sum + arr[i];
	else
		return 0;

	return sum;
}