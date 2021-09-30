#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "russian");
	const int maximum = 10;
	int A[] = { 12,45,67,8,9,-4,-7,5,5,64 };
	int ravno[maximum];
	int bolshe[maximum];
	int menshe[maximum];


	int i, k, j, rav = 0, bol = 0, men = 0;

	cout << "Введите число, с которым мы будем сравнивать " << endl;
	cin >> k;


	for (i = 0, j = 0; i < maximum; i++)
	{
		if (*(A + i) == k)
		{
			*(ravno + j) = i;
			j++;
			rav++;
		}
	}
	for (i = 0, j = 0; i < maximum; i++)
	{
		if (*(A + i) > k)
		{
			*(bolshe + j) = i;
			j++;
			bol++;
		}
	}
	for (i = 0, j = 0; i < maximum; i++)
	{
		if (*(A + i) < k)
		{
			*(menshe + j) = i;
			j++;
			men++;
		}
	}

	for (i = 0; i < maximum; i++)
		cout << "A[" << i << "]" << *(A + i) << endl;
	cout << "----------" << endl;

	cout << "Индексы равных элементов, если они присутствуют:" << endl;
	for (i = 0; i < rav; i++)
		cout << *(ravno + i) << endl;
	cout << "----------" << endl;

	cout << "Индексы элементов больше заданного числа: " << endl;
	for (i = 0; i < bol; i++)
		cout << *(bolshe + i) << endl;
	cout << "----------" << endl;

	cout << "Индексы элементов меньше заданного числа: " << endl;
	for (i = 0; i < men; i++)
		cout << *(menshe + i) << endl;

}
