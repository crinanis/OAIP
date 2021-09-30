#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double a = 4, b = 7, n = 200, h, x, s, i = 1, s1 = 0, s2 = 0, z;

    h = (b - a) / (2 * n),
        x = a + 2 * h;
 
    do {
        s2 = s2 + pow(cos(x),3);
        x = x + h;
        s1 = s1 + pow(cos(x), 3);
        x = x + h;
        i = i + 1;
    } while (i < n);

    z = (h / 3) * (pow(cos(a), 3) + 4 * pow(cos(a + h), 3) + 4 * s1 + 2 * s2 + pow(cos(b), 3));


    cout << "z = " << z << endl;
}
