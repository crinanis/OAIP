//вариант 7
#include <iostream>
using namespace std;

double kor(double(*)(double), double, double);
double kor1(double(*)(double), double, double);
const double e = 1e-4;
double k;

double f(double x)
{
	return (pow(x, 3) + 2 * x - 4);
}

double s(double y)
{
	return (pow(y, 2) - 1);
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

double kor1(double(*s) (double), double c, double d)
{
	while (abs(c - d) > 2 * e)
	{
		double y;
		y = (c + d) / 2;
		if (s(c) * s(y) <= 0)
			d = y;
		else
			c = y;
	}
	return (c + d) / 2;
}

int main()
{
	setlocale(LC_ALL, "ru");
	double z, a, b, p, c, d;
	cout << "Введите приближения а и b для первого уравнения:" << endl;
	cin >> a >> b;
	z = kor(f, a, b);
	cout << " Корень первого уравнения равен = " << z << endl;
	cout << "----------------------" << endl;
	cout << "Введите приближения c и d для второго уравнения:" << endl;
	cin >> c >> d;
	p = kor1(s, c, d);
	cout << " Корень второго уравнения равен = " << p;
}
