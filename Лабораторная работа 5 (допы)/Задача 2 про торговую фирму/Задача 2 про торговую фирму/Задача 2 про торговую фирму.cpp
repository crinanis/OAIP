#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "russian");
	float p, procent = 0.03, Q, d = 0;
	cout << "Введите сумму, которую реализовала фирма в первый день: ";
	cin >> p;
	cout << "Введите план, какой необходимо реализовать фирме: ";
	cin >> Q;
	while (p <= Q) {
		p = p + p * procent;
		d = d + 1;
	}
	cout << "Фирме придётся торговать " << d << " дней\n";
	cout << "Когда выручка превысит заданное значение Q, она составит " << p << " рублей";
}
