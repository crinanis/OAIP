// Вариант 6. Проверить, все ли строки матрицы содержат хотя бы один нулевой элемент. Если нет, то заменить зна-чения всех отрицательных элементов матрицы на нулевые.
#include <iostream>
using namespace std;
#define MINm  -10
#define MAXm   10

int main()
{
	setlocale(LC_ALL, "RU");
	int n, n2, i, j, q = 0;
	int o(int i, int n, int n2, int j, int** a);
	int p(int i, int n, int n2, int** a, int q, int j);
	cout << "Введите количество строк матрицы: "; cin >> n;
	cout << "Введите количество столбцов матрицы: "; cin >> n2;
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
	o(i, n, n2, j, a);
	p(i, n, n2, a, q, j);

}
int o(int i, int n, int n2, int j, int** a)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n2; j++)
		{
			cout.width(5);
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << endl;
	return 0;
}

int p(int i, int n, int n2, int** a, int q, int j)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (a[i][j] == 0)
			{
				q++;
			}
		}
	}
	if (q == n) {
		cout << "В данной матрице каждая строка содержит нулевой элемент" << endl;
	}
	else {
		cout << "В данной матрице не каждая строка содержит нулевой элеменn. Он есть только в " << q << " строках." << endl;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (a[i][j] < 0)
			{
				a[i][j] = 0;
			}
		}
	}
	cout << "Матрица после преобразований: \n";
	cout << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n2; j++)
		{
				cout.width(5);
				cout << a[i][j];
		}
		cout << endl;
	}
	delete[] a;
	return 0;
}