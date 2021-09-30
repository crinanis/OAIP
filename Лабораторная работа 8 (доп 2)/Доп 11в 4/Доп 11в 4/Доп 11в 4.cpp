#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "russian");
	double a = -0.5, b = 0.5, e = 0.0001, x;
	do {
		x = (a + b) / 2;
		if ((sin(x)+pow(x,3)) * (sin(a)+pow(a,3)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (fabs(a - b) > (2 * e));
	cout << "Значение х= " << x;
}