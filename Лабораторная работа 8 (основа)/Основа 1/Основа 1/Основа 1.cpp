#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double a = 4, b = 7, n = 200, h, x, s = 0, z;
    h = (b - a) / n;
    x = a; 

    do {
        s = s + h * (pow(cos(x), 3) + pow(cos(x + h), 3)) / 2;
        x = x + h;
    } while (x < (b - h));

    z = s;
    cout << "z = " << z << endl;
}


