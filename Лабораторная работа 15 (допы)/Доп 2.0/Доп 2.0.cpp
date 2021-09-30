//Вариант 8 (8-я лаба)

#include <iostream>
using namespace std;

double kor(double(*)(double), double, double);
const double e = 1e-4;
double k;
double f(double x)
{
	return (pow(x, 3) + x - 2);
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

//Оригинал 8-й лабы


//void main()
//{
//	setlocale(LC_CTYPE, "russian");
//	double a = 1, b = 10, e = 0.0001, x;
//	do {
//		x = (a + b) / 2;
//		if ((pow(x, 3) + x - 2) * (pow(a, 3) + a - 2) <= 0) {
//			b = x;
//		}
//		else {
//			a = x;
//		}
//	} while (fabs(a - b) > (2 * e));
//	cout << "Значение х= " << x;
//}
