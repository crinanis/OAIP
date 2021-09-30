#include <iostream>
	using namespace std;

	//1.	Извлечь 5 битов числа A, начиная со второго и вставить их в число B, начиная с третьего бита.

	void main()
	{
		setlocale(LC_CTYPE, "Russian");
		char tmp[33];
		int A, B, maskA = 62;
		int maskB = ~maskA >> 1 << 3;

		cout << "Введите первое число: "; 
		cin >> A;
		_itoa_s(A, tmp, 2);
		cout << "A в двоичном представлении: " << tmp << endl;

		cout << "Введите второе число: "; 
		cin >> B;
		_itoa_s(B, tmp, 2);
		cout << "B в двоичном представлении: " << tmp << endl;


		_itoa_s(maskA, tmp, 2);
		cout << "Маска для А: " << tmp << endl;
        _itoa_s((A & maskA) >> 1, tmp, 2);
		cout << "Выделенные биты А: " << tmp << endl;

		_itoa_s(maskB, tmp, 2);
		cout << "Маска для В: " << tmp << endl;

		_itoa_s(B & maskB, tmp, 2);
		cout << " Очищены биты в B: " << tmp << endl;

		_itoa_s(((B & maskB) | ((A & maskA) << 1)), tmp, 2);
		cout << " Результат B=" << tmp << endl;
	}

