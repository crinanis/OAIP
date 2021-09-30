//1. Дана целочисленная прямоугольная матрица. Определить количество строк, содержащих хотя бы один нулевой элемент.
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
	cout << "-----------------------------------------------------------------------------------" << endl;
	return 0;
}
int p(int i, int n, int n2, int **a, int q, int j)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (a[i][j] == 0)
			{
				q++;
				break;
			}
		}
	}
	cout << "Количество строк с 0: " << q;
	delete[] a;
	return 0;
}