#include <iostream>
//Даны массивы A и B, состоящие из n элементов. Построить массив S, каждый элемент которого равен сумме соответствующих элементов массивов A и B.
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int i;
	const int sz = 5;
	float A[] = { 5, -4, 17.1, 9, 1 };
	float B[] = { 6, -2, -55.3, 8, -19 };
	float S[sz];
	for (i = 0; i < sz; i++)
		*(S + i) = *(A + i) + *(B + i);

	for (i = 0; i < sz; i++)
		cout << *(S + i) << endl;
}