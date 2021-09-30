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
	int n, sum = 0, i, kolvo = 0, k = 0, nomMin;
	cout << "Введите размер массива: ";
	cin >> n;
	int b[20];

	int* arr = new int[n];
	int* arr2 = new int[n];

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
		arr2[i] = arr[i];
	}

	for (int j = 0; j < n; j++) {
		for (i = 0; i < n - 1; i++) {
			if (arr2[i] > arr2[i + 1]) {
				int bol = arr2[i];
				arr2[i] = arr2[i + 1];
				arr2[i + 1] = bol;
			}
		}
	}


	for (i = 0; i < n; i++) {
		if (arr[i] == arr2[0]){
			nomMin = i;
		}
	}

	//////////
	int q = 0;

		for (i = 0; i < n;)
		{
			if (arr[i] < 0)
			{
				b[q++] = i;
			}
			i++;
		}
		

		for (i = b[1]; i < b[2]; i++) {
			sum += arr[i];
		}
	
    cout << "\n" << "------------" << endl;
	cout << "Номер минимального элемента: " << nomMin << endl;
	cout << "Сумма элементов между первым и вторым отрицательными элементами: " << sum << "\n";
	delete[] arr;
	return 0;
}
int matrix()
{
	int n, n2, i, j, kolvo = 0, q = 0;
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
				kolvo++;
			}

		}

	}

	cout << "Количество столбцов, в которых имеется нулевой элемент: " << kolvo << "\n";

	delete[] a;
	return 0;
}