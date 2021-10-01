#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void bubbleSort(int a[], int n);
void selectSort(int A[], int size);
void sortHoar(int A[], int sm, int em);

void main() {
	int max = 0, k = 0, o = 0;
	setlocale(LC_ALL, "RU");
	int A[20], B[20];
	srand(time(NULL));
	cout << "A:";
	for (int i = 0; i < 20; i++)
	{
		A[i] = 10 + rand() % 40;

		cout << A[i] << " ";

	}
	cout << endl;
	cout << "B:";
	int i = 0, t = 1;
	while (t < 20)
	{
		i++, t++;
		if (i % 2 == 0 && A[t] % 2 != 0) {
			int h;
			h = o;
			B[h] = A[i];
			cout << B[h] << " ";
			o++;
		}
	}
	cout << endl;

	cout << endl;
	selectSort(B, o);
	cout << "Отсортированный массив " << "B:";
	for (int i = o - 1; i > -1; i--)
	{
		cout << B[i] << " ";
	}

	cout << endl;
	sortHoar(B, 1, o - 1);
	cout << "Отсортированный массив " << "B:";
	for (int i = o - 1; i > -1; i--)
	{
		cout << B[i] << " ";
	}
}

int getHoarBorder(int A[], int sm, int em)
{
	int i = sm - 1, j = em + 1;
	int brd = A[sm];
	int buf;
	while (i < j)
	{
		while (A[--j] > brd);
		while (A[++i] < brd);
		if (i < j)
		{
			buf = A[j];
			A[j] = A[i];
			A[i] = buf;
		};
	}
	return j;
}

void sortHoar(int A[], int sm, int em)
{
	if (sm < em)
	{
		int hb = getHoarBorder(A, sm, em);
		sortHoar(A, sm, hb);
		sortHoar(A, hb + 1, em);
	}

};

void selectSort(int A[], int size)
{
	int k, i, j;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1, k = i; j < size; j++)
			if (A[j] < A[k])
				k = j;
		int c = A[k];
		A[k] = A[i];
		A[i] = c;
	}
}