#include <iostream>
using namespace std;

int main()

{
	setlocale(LC_CTYPE, "Russian");
	float b = -0.05, a = 1.72, i = -5, d, z;
	while (i <= 5) {
		i += 2;
		if (i > 3 * b) {
			d = a + b * i;
		}
		else {
			d = tan(b) - a * i;
		}
		z = ((d * a) / 4) / ((3 * a * b) - (exp(1 + d) / 100));
		cout << "Числа z: " << z << endl;
		cout << "Числа d:" << d << endl;
	}
}

