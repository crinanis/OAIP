#include <iostream> 
using namespace std;

// 2.	Установить в 1в числе Аn битов вправо от позиции p.

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, p, n;
	char tmp[33];
	cout << "Введите число А\n ";
	cin >> A;

	_itoa_s(A, tmp, 2);
	cout << " Число А в двоичном представлении: " << tmp << endl;
	
	cout << "Введите p\n";
	cin >> p;
	cout << "Введите n\n";
	cin >> n;

	_itoa_s(pow(2, p) - 1, tmp, 2);
	cout << tmp << endl;
	int a = pow(2, p) - 1;
	a = a >> (p - n) << (p - n);
	_itoa_s(a, tmp, 2);
	cout << tmp << endl;
	_itoa_s(A | a, tmp, 2);



	cout << " Результат: " << tmp << endl;
}
