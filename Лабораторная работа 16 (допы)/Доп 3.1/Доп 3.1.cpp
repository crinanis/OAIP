// Вариант 6. Написать функцию as с переменным числом параметров, которая находит сумму чисел типа int по формуле: S=a1*a2-a2*a3+a3*a4-. . . . .
#include <iostream>
using namespace std;

int sum(int n, ...)
{
	int* p = &n;
	int s = 0;
	p += 1;
	for (int i = 1; i <= n / 2; i++) {
		int* u = p + 1;
		int* k = p + 2;
		s += (*p) * (*u) - (*u) * (*k);
		p = k;
	}
	return s;
}
void main()
{
	cout << sum(6, 1, 2, 3, 4, 5, 6, 7) << endl;
	cout << "-------------------------" << endl;
	cout << sum(9, 1, 1, 20, 5, 6, 7, 2, 5, 44, 2) << endl;
	cout << "-------------------------" << endl;
	cout << sum(15, 7, -2, 3, 3, 6, 7, 5, 8, 23, 16, -22, 65, 1, 6, 90, 1) << endl;
}