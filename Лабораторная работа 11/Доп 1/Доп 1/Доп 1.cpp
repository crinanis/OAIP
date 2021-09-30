#include <iostream>
//Дан массив A из n элементов и B из m элементов. Содержится ли наибольший элемент массива A в масси-ве B?
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int i, sz = 5;
	float maxA, *maximum;
	string itog;
	float A[] = { 5, -4, 17, 9, 1 };
	float B[] = { 6, -2, -55.3, 17, -19 };
	for (i = 0; i < sz; i++)
		if (*(A + i) < *(A + i + 1)) maxA = *(A + i + 1); cout << "Максимальный элемент в массиве А равен: " << maxA << endl;
	maximum = &maxA;
	for (int k = 0; k < sz; k++)
		if (*(B + k) == *maximum) itog = ("В массиве В содержится наибольший элемент из массива А");
		else if (*(B + k - 1) != *maximum) itog = ("В массиве В нет наибольшего элемента из массива А");
	   cout << itog;
}
