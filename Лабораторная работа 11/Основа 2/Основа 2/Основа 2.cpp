#include <iostream>
//Заданы два массива А(n) и В(n). Подсчитать в них количество элементов, меньших значения t, и первым на печать вывести массив, имеющий наибольшее их количество.
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int i, sz = 5, cA = 0, cB = 0, t;
	float A[] = { 5, -4, 17.1, 9, 1 };
	float B[] = { 6, -2, -55.3, 8, -19 };
	cout << "Введите значение t" << endl;
	cin >> t;
	for (i = 0; i < sz; i++)
		if (*(A + i) < t) cA += 1;
        else if (*(B + i) < t) cB += 1; 
	cout << "cA= " << cA << endl;
	cout << "cB= " << cB << endl;
    if (cA > cB)
	 for (i = 0; i < sz; i++) cout << * (A + i) << endl;
    else for (i = 0; i < sz; i++) cout << * (B + i);
}