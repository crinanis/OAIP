#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double a = 0, b = 3, n = 200, h, x, s = 0, z;
    h = (b - a) / n;
    x = a;

    do {
        s = s + h * ((pow(x, 3) - 1) + pow((x + h), 3)) / 2;
        x = x + h;
    } while (x < (b - h));

    z = s;
    cout << "z = " << z << endl;
}
