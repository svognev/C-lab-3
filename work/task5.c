int NegNum(int arr[], int N) // ���� ������ ������������� ����� � �������
{
	
	for (int i = 0; i < N ; i++)
	{
		if (arr[i] < 0)
			return i;
	}
}

int PozNum(int arr[], int N) // ���� ��������� ������������� ����� � �������
{
	for (int j = N - 1;j > 0; j--)
	{
		if (arr[j] > 0)
			return j;
	}
}


int getSumInt(int arr[], int N)// ���������� ����� � ������� arr ����� N
{
	int sum = 0;
	int neg = NegNum(arr, N);
	int poz = PozNum(arr, N);

 	if (poz < neg) // ���� � ������� ������ ������������� ����� ����� ����� ���������� ��������������,������ �� �������.
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
