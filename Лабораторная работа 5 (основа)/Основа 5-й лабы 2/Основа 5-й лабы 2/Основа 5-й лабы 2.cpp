#include <iostream>
using namespace std;
void main()
{
	float a = 2e-3, b = 8.5, n = 2, z, y, i = 1, e = 2.71828;
	while (i < 3.5)
	{
		y = sqrt(i * b - pow(b, 2) * a);
		z = y * tan(n / 4) - pow(e, (1 + b));
		cout << "i=" << i << "\t";
		cout << " z=" << z << endl;
		i = i + 0.5;
	}
}
