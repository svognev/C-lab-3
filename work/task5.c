int NegNum(int arr[], int N) // ищем первое отрицательное число в массиве
{
	
	for (int i = 0; i < N ; i++)
	{
		if (arr[i] < 0)
			return i;
	}
}

int PozNum(int arr[], int N) // ищем последнее положительное число в массиве
{
	for (int j = N - 1;j > 0; j--)
	{
		if (arr[j] > 0)
			return j;
	}
}


int getSumInt(int arr[], int N)// нахождение суммы в массиве arr длины N
{
	int sum = 0;
	int neg = NegNum(arr, N);
	int poz = PozNum(arr, N);

 	if (poz < neg) // если в массиве первое отрицательное число стоит после последнего положительного,меняем их местами.
	{
		int  temp = 0;
		temp = poz;
		poz = neg;
		neg = temp;
	}
	for (int i = neg + 1; i < poz; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
