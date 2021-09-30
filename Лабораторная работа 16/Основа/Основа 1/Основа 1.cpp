// Написать функцию fsum с переменным числом параметров, которая находит сумму чисел типа int по формуле: S=a1*a2+a2*a3+a3*a4+ . . . .
#include <iostream>
using namespace std;


int summa(int n, ...)
{
	int* p = &n;
	int sum = 0;
	int len = sizeof(p);
	for (int i = 0; i <= len; i++)
	{
		sum += (*(p + i)) * (*(p + i + 1));
	}
	return sum;
}
void main()
{
	cout << summa(6, 4, 5, 1, 2, 3, 0) << endl;
	cout << "-------------------------" << endl;
	cout << summa(2, 3, 7, 4, 2, 4) << endl;
	cout << "-------------------------" << endl;
	cout << summa(1, 1, 1, 1, 1, 1);
}
