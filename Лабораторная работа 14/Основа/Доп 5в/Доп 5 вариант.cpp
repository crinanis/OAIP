#include <iostream>
using namespace std;
#define MIN  -50
#define MAX   50
#define MINm  -10
#define MAXm   10
#define MINma  -2
#define MAXma   5
int massiv();
int matrix();

int main()
{
	setlocale(LC_ALL, "RUS");
	int c;
	do
	{
		cout << "С чем будем работать?" << endl;
		cout << "1 - С одномерным массивом" << endl;
		cout << "2 - С матрицей" << endl;
		cout << "3 - Выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1:  massiv();  break;
		case 2:  matrix();  break;
		case 3:   break;
		}
	} while (c != 3);

}
int massiv()
{
	int n, sum = 0, lastmin, i, null = 0, k = 0;

	cout << "Введите размерность массива: "; cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++)
	{
		arr[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (MAX - MIN) + MIN);
	}
	for (i = 0; i < n; i++)
		if (arr[i] == 0)
			null++;
	for (i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			lastmin = arr[i];
			k = i;
		}
	}
	for (i = k + 1; i < n; i++)
	{
		sum += arr[i];
	}
	for (i = 0; i < n; i++) {
		cout << arr[i];
		cout.width(5);
	}
	cout << "------------" << endl;
	cout << "Количество элементов = 0: " << null << endl;
	cout << "Сумма после пследнего отрицательного элемента: " << sum << endl;
	delete[] arr;
	return 0;
}
int matrix()
{
	setlocale(LC_ALL, "RUS");
	int n, n2, i, j, col = 0, t = 0, k;
	cout << "Введите кол-во строк матрицы: "; cin >> n;
	cout << "Введите кол-во столбцов матрицы: "; cin >> n2;
	int** a = new int* [n];
	for (i = 0; i < n; i++)
		a[i] = new int[n2];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n2; j++)
		{
			a[i][j] = (int)(((double)rand() /
				(double)RAND_MAX) * (MAX - MIN) + MINma);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n2; j++)
		{
			cout.width(5);
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << "-------------" << endl;
	for (j = 0; j < n2; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (a[i][j] == 0)
			{
				col++;
				break;
			}
		}
	}
	int max = 0;
	int simvol=0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n2; j++)
		{
			if (a[i][j] == a[i][j + 1])
			{
				t++;
				k = i;
			}
			if (j == n2 - 1)
			{
				if (t > max)
				{
					max = t;
					simvol = k;
					t = 0;
				}
			}
		}

	cout << "Строка с максимальным кол-вом повторений: " << simvol << endl;
	cout << "Столбцов с 0: " << col << endl;

	delete[] a;
	return 0;
}