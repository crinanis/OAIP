// Вариант 7. Написать функцию mn с переменным числом параметров, 
//которая находит минимальное из чисел типа int или из чисел типа double, тип параметров определяется с помощью первого параметра функции. 
#include <iostream> 
using namespace std;


int f(int n, ...)
{
	int* p = &n;
	int len = sizeof(*p);
	for (int j = 0; j < len; j++)
	{
		for (int i = 0; i < len; i++)
		{
			if (*(p + i) > * (p + i + 1)) {
				int y = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = y;
			}
		}
	}
	int min = *(p + 0);
	return min;
}

void main()
{
	cout << f(5, 4, 5, 1, 2) << endl;
	cout << "---------------" << endl;
	cout << f(7, 4, 19, 3, 13, 5, 8) << endl;
	cout << "---------------" << endl;
	cout << f(3, 54, 49) << endl;
}