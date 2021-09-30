#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

//Доп 1. Дана квадратная матрица порядка 2n, элементы которой формируются случайным образом и находятся в пределах от 10 до 10. Получить новую матрицу, переставляя ее блоки размера n×n в соответствии со схемой.

//#define N 3
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	int A[2 * N][2 * N], B1[N][N], B2[N][N], B3[N][N], B4[N][N], i, j, k, m;
//	srand((unsigned)time(NULL));
//
//	cout << "Начальный массив" << endl;
//	for (i = 0; i < 2 * N; i++)
//	{
//		for (j = 0; j < 2 * N; j++)
//		{
//			A[i][j] = rand() % 10 + 1;
//			cout << setw(2) <<  A[i][j] << "  ";
//		}
//		cout << "\n";
//	}
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			B1[i][j] = A[i][j];
//
//	for (i = 0; i < N; i++)
//		for (j = N, m = 0; j < 2 * N; j++, m++)
//			B2[i][m] = A[i][j];
//
//	for (i = N, k = 0; i < 2 * N; i++, k++)
//		for (j = N, m = 0; j < 2 * N; j++, m++)
//			B3[k][m] = A[i][j];
//
//	for (i = N, k = 0; i < 2 * N; i++, k++)
//		for (j = 0; j < N; j++)
//			B4[k][j] = A[i][j];
//
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			A[i][j] = B3[i][j];
//
//	for (i = 0; i < N; i++)
//		for (j = N, k = 0; j < 2 * N; j++, k++)
//			A[i][j] = B4[i][k];
//
//	for (i = N, k = 0; i < 2 * N; i++, k++)
//		for (j = N, m = 0; j < 2 * N; j++, m++)
//			A[i][j] = B1[k][m];
//
//	for (i = N, k = 0; i < 2 * N; i++, k++)
//		for (j = 0; j < N; j++)
//			A[i][j] = B2[k][j];
//
//	cout << "Массив после перестановки" << endl;
//	for (i = 0; i < 2 * N; i++)
//	{
//		for (j = 0; j < 2 * N; j++)
//			cout << setw(2) <<  A[i][j] << "  ";
//		cout << "\n";
//	}
//
//	return 0;
//}

//Доп 5. Путем перестановки элементов квадратной вещественной матрицы добиться того, чтобы ее максимальный элемент находился в левом верхнем углу, следующий по величине  в позиции (2,2),
//следующий по величине  в позиции (3,3) и т. д., заполнив таким образом всю главную диагональ.

int main()
{
	setlocale(0, "");
	const int N = 100;
	int i, j, m, n, max1 = 0, max2 = 100, k, a, b, c = 0, d = 0;
	int A[N][N], B[N];
	cout << "Введите размер квадратной матрицы n: ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			A[i][j] = rand() % 100;
			cout << setw(4) << A[i][j];
		}
		cout << "\n";
	}
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (A[i][j] > max1&& A[i][j] < max2) { max1 = A[i][j]; a = i; b = j; }
			}
		}
		A[a][b] = A[c][d];
		c++; d++;
		B[k] = max1;
		max2 = max1;
		max1 = 0;
		cout << endl;
	
	}

	for (i = 0, j = 0, k = 0; i < n; k++, j++, i++)
	{
		A[i][j] = B[k];
	}

	cout << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << setw(4) << A[i][j];
		}
		cout << "\n";
	}
}

//Доп 7. Дана действительная матрица A(N, N) . Найти сумму  и  мах  значение  среди элементов, расположенных в заштрихованной части матрицы--------------------------------------------------------------------------------


//#define N 6
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	int A = 10, B = 30, i, j;
//	int mas[N][N], maxT1 = 0, max1 = 0, iv, maxT2 = 0, max2 = 0, ip;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			mas[i][j] = rand() % (B - A + 1) + A;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j< N; j++)
//		{
//			printf("%d ", mas[i][j]);
//		}
//		printf("\n");
//	}
//	int n = N;
//
//
//	for (int s = 0, i = 0; i < 3; i++)
//	{
//		for (j = s; j < n-s && n!=0; j++)
//		{
//			maxT1 += mas[i][j];
//		}
//		printf("Сумма элементов строки " "%d" " : " "%d", i, maxT1);
//		printf("\n");
//		if (maxT1 > max1)
//		{
//			max1 = maxT1;
//			iv = i;
//		}
//		maxT1 = 0;
//		s++;
//	}
//	for (int k = N - 4, i = 3; i < N; i++)
//	{
//		for (j = k; j < n - k; j++)
//		{
//			maxT2 += mas[i][j];
//		}
//		k--;
//		printf("Сумма элементов строки " "%d" " : " "%d", i, maxT2);
//		printf("\n");
//		if (maxT2 > max2)
//		{
//			max2 = maxT2;
//			ip = i;
//		}
//		maxT2 = 0;
//	}
//
//	if (max1 > max2) {
//		printf("Максимальная сумма выходит в " "%d " "строке и является " "%d", iv, max1);
//	}
//	else {
//		printf("Максимальная сумма выходит в " "%d " "строке и является " "%d", ip, max2);
//	}
//}
