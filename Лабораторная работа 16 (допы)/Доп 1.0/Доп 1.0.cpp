// Вариант 15. 1. Проверить, все ли столбцы матрицы содержат хотя бы один положительный элемент. 
//Если нет, то в первом столбце, не удовлетворяющем условию, заменить отрицательные элементы их модулями.
#include <iostream>
using namespace std;
#define MAX 15
#define MIN -15

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, n2, i, j, z = 0;
	int out(int i, int n, int n2, int j, int** a);
	int work(int i, int n, int n2, int j, int** a, int z);
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
				(double)RAND_MAX) * (MAX - MIN) + MIN);
		}
	}
	out(i, n, n2, j, a);
	work(i, n, n2, j, a, z);
	out(i, n, n2, j, a);
	delete[] a;
}
int out( int i, int n, int n2, int j, int** a)
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
	cout << "---------------------" << endl;
	return 0;
}
int work(int i, int n, int n2, int j, int** a, int z)
{
	for (i = 0; i < n2; i++)
	{
		z = 1;
		for (j = 0; j < n; j++)
			if (a[j][i] > 0) z = 0;
		if (z == 1)
		{
			for (j = 0; j < n; j++) if (a[j][i] < 0) a[j][i] = -a[j][i];
		}
	}
	return 0;
}