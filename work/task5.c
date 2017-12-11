

int getSumInt(int arr[], int N)
{
	int i = 0;
	int begin = 0;
	int finish = N - 1;
	int sum=0;
	while (i < N)
	{
		if (arr[i] < 0)
		{
			begin = i;
			break;
		}
		i++;
	}
	if (i == N)
		return 0;
	i = N - 1;
	while (i > 0)
	{
		if (arr[i] > 0)
		{
			finish = i;
			break;
		}
		i--;
	}
	if (i == 0)
		return 0;

	for (i = begin+1; i <= finish-1; i++)
		sum = sum + arr[i];

	return sum;
}