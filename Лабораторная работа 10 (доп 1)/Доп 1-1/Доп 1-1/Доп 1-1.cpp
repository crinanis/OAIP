#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "russian");
	char tmp[33];
	int A, B, p, n, k, z;
	cout << "Введите целое число А:\n" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном представлении - " << tmp << endl;
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
	_itoa_s(A ^ a, tmp, 2);
	cout << "А с инвертированными битами: " << tmp << endl;
	int q, m;
	cout << "Введите целое число B: \n" << endl;
	cin >> B;
	_itoa_s(B, tmp, 2);
	cout << "Число в двоичном представлении - " << tmp << endl;
	cout << "Введите, с какой позиции занулять биты в В: " << endl;
	cin >> q;
	cout << "Введите, сколько битов занулить: " << endl;
	cin >> m;
	int b = B >> p << p;
	int c = b + (p - m) + 1;
	_itoa_s(c, tmp, 2);
	cout << "В с обнулёнными битами: " << tmp << endl;
	int mask1 = 60;
	_itoa_s(mask1, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & mask1), tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
    _itoa_s((c | ((A & mask1) << 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;


}