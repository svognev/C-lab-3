int MinNum(int arr[], int N) // ищем минимальное число в массиве
{
	int cn = 0;
	for (int i = 0; i <= N - 1; i++)
	{
		if (arr[i] < arr[cn])
			cn = i;
	}
			return cn;
}

int MaxNum(int arr[], int N) // ищем максимальное число в массиве
{
	int cn = 0;
	for (int j = 0; j <= N - 1; j++)
	{
		if (arr[j] > arr[cn])
			cn = j;
	}
	return cn;
}


int getSumMaxMin(int arr[], int N) // нахождение суммы в массиве arr длины N
{
	{
		int sum = 0;
		int min = MinNum(arr, N);
		int max = MaxNum(arr, N);

		if (max < min) // если в массиве первое отрицательное число стоит после последнего положительного,меняем их местами.
		{
			int  temp = 0;
			temp = max;
			max = min;
			min = temp;
		}
		for (int i = min + 1; i < max ; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
}