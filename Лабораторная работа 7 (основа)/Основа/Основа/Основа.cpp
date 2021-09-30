#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    double g = 0, c = -0.045, b, p = 1;
    for (int i = 0; i <= 3; i++) {
        cout << "Введите b" << endl;
        cin >> b;
        p = p * pow((b + 1), 2);
    }
    g = c * p;
    cout << "Значение переменной g= " << g << endl;
}

