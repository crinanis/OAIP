#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double a = 2, b = 10, e = 0.0001, x, s, x1, z, func1, proizv1, pro, func2, proizv2, modul;

    func1 = pow(a, 3) + a - 3;
    proizv1 = 3 * pow(a, 2) + 1;
    pro = func1 * proizv1;
    cout << "pro= " << pro << endl;
    if (func1 * proizv1 > 0) {
        x1 = a;
    }
    else {
        x1 = b;
    }

    cout << "Сначала x1= " << x1 << endl;

    do {
        x = x1;
        func2 = pow(x, 3) + x - 3;
        proizv2 = 3 * pow(x, 2) + 1;
        x1 = x - (func2 / proizv2);
        modul = fabs(x1 - x);
    } while (modul > e);

    cout << "В конце x1 = " << x1 << endl;
}
