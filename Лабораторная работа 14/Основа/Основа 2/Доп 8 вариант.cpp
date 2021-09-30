#include <iostream>
using namespace std;
#define MIN  -50
#define MAX   50
#define MINm  -10
#define MAXm   10
#define MINma  -5
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
	int n, sum = 0, i, kolvo = 0, k = 0;
    cout << "Введите размер массива: ";
	cin >> n;

	int* arr = new int[n];
	for (i = 0; i < n; i++)
	{
		arr[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (MAXm - MINm) + MINm);
	}

	for (i = 0; i < n; i++) {
		cout << arr[i];
		cout.width(5);
	}

	for (i = 0; i < n; i++) {
		if (arr[i] > 0) {
			kolvo++;
		}
	}

	for (i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			k = i;
		}
	}
	for (i = k + 1; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "\n" << "------------" << endl;
	cout << "Количество элементов > 0: " << kolvo << "\n" << endl;
	cout << "Сумма после последнего 0 элемента: " << sum << "\n";
	delete[] arr;
	return 0;
}
int matrix()
{
	int n, n2, i, j, stolbec = 0, q = 0;
	int b[10];
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
				(double)RAND_MAX) * (MAXm - MINm) + MINm);
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
				b[q++] = j;
				break;
			}

		}
	}
	stolbec = b[0];

	cout << "Первый столбец с 0 элементом: " << stolbec << "\n";

	delete[] a;
	return 0;
}