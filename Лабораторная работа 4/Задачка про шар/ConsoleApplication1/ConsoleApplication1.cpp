#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "russian");
	float d1, d2, a, rSh, r;
	cout << "Введите первую диагональ ромба: ";
	cin >> d1;
	cout << "Введите вторую диагональ ромба: ";
	cin >> d2;
	cout << "Введите радиус шара: ";
	cin >> rSh;
	a = sqrt(pow(d1, 2) / 4 + (pow(d2, 2) / 4)); // Находим сторону ромба //
	r = (d1 * d2) / (4 * a); // Вычисляем радиус шара, способный пройти через этот ромб //
	if (rSh <= r) {
		cout << "Шар сможет пройти";
	}
	else {
		cout << "Шар не сможет пройти";
	}
}
