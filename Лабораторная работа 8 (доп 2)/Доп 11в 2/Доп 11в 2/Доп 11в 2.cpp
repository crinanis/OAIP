#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double a = 1, b = 3, n = 200, h, x, s, i = 1, s1 = 0, s2 = 0, z;

    h = (b - a) / (2 * n),
        x = a + 2 * h;

    do {
        s2 = s2 + (sin(x) + 1);
        x = x + h;
        s1 = s1 + (sin(x) + 1);
        x = x + h;
        i = i + 1;
    } while (i < n);

    z = (h / 3) * ((sin(x) + 1) + 4 * (sin(a + h) + 1) + 4 * s1 + 2 * s2 + (sin(b) + 1));


    cout << "z = " << z << endl;
}