﻿#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "russian");
	double a = 1, b = 10, e = 0.0001, x;
	do {
		x = (a + b) / 2;
		if (((cos(x) + x - 7) * (cos(a) + a - 7)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (fabs(a - b) > (2 * e));
	cout << "Значение х= " << x;
}