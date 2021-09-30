#include <iostream>		
using namespace std;
#define MIN  -50
#define MAX   50
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
	setlocale(LC_ALL, "RUS");
	int n=0, i, minmax, bol;
	int* a;
	cout << "Введите размер массива: ";
	cin >> n;

	a = new int[n];
	for (i = 0; i < n; i++)
	{
		a[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (MAX - MIN) + MIN);

	}
	cout << "Наш массив: " << endl;
	for (i = 0; i < n; i++) {
		cout << a[i];
		cout.width(5);
	}
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

	for (int j = 0; j < n; j++) {
		for (i = 0; i < n - 1; i++) {
			if (a[i] > a[i+1]) {
				bol = a[i];
				a[i] = a[i + 1];
				a[i + 1] = bol;
			}
		}
	}

	for (i = 0; i < n; i++) {
		cout << a[i];
		cout.width(5);
	}
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

	for (i = 0; i < n; i++) {
		if (a[i] < a[i + 1] && a[i] < 0) {
			minmax = a[i];
		}
	}

    cout << "Минимальный максимальный элемент равен: " << minmax << endl;

	delete[] a;
	return 0;
}

int matrix()
{
	int n, n2, i, j, max, nmax, n2max, k = 0;
	int tStr[1][4], tStlb[5][1];
	cout << "Введите количество строк матрицы: "; 
	cin >> n;
	cout << "Введите количество столбцов матрицы: "; 
	cin >> n2;
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
	max = a[0][0];
	for (i = 0; i < n; i++)
		for (j = 0; j < n2; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				nmax = i, n2max = j;
			}
	for (j = 0; j < 4; j++)             //Выделяем первую строк
		tStr[0][j] = a[0][j];
	for (i = 0, j = 0; j < 4; j++)      //Вместо первой строки записываем строку с наибольшим значением
	{
		a[i][j] = a[nmax][j];
	}
	for (i = nmax, j = 0; j < 4; j++)    //На место строки с наибольшим значением вставляем первую строку
	{
		a[nmax][j] = tStr[0][j];            
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
	for (i = 0; i < 5; i++)                 //Выделяем первый столбец
		tStlb[i][0] = a[i][0];               
	for (i = 0, j = 0; i < 5; i++)          //Заменяем первый столбец на столбец с максимальным элементом
	{
		a[i][j] = a[i][n2max];
	}
	for (i = 0, j = n2max; i < 5; i++)      //Заменяем изначальный столбец с максимальным элементом на первый столбец 
	{
		a[i][n2max] = tStlb[i][0];
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

	delete[] a;
	return 0;
}