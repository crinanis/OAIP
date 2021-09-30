//Вариант 11 (8-я лаба)

#include <iostream>
using namespace std;
double kor(double(*)(double), double, double);
const double e = 1e-4;
double f(double x)
{
	return (sin(x) + pow(x,3));
}
double kor(double(*f) (double), double a, double b)
{
	while (abs(a - b) > 2 * e)
	{
		double x;
		x = (a + b) / 2;
		if (f(a) * f(x) <= 0)
			b = x;
		else
			a = x;
	}
	return (a + b) / 2;
}
int main()
{
	setlocale(LC_ALL, "ru");
	double z, a, b;
	cout << "Введите а и b:" << endl;
	cin >> a >> b;
	z = kor(f, a, b);
	cout << " Корень уравнения равен = " << z;

}


//Оригинал 11-й лабы


//void main()
//{
//	setlocale(LC_CTYPE, "russian");
//	double a = -0.5, b = 0.5, e = 0.0001, x;
//	do {
//		x = (a + b) / 2;
//		if ((sin(x) + pow(x, 3)) * (sin(a) + pow(a, 3)) <= 0) {
//			b = x;
//		}
//		else {
//			a = x;
//		}
//	} while (fabs(a - b) > (2 * e));
//	cout << "Значение х= " << x;
//}
