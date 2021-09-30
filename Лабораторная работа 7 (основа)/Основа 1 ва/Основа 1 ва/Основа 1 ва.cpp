#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    double d = 12.5e-4, h, s = 0, a;
    for (int i = 0; i <= 4; i++) {
        cout << "Введите а " << endl;
        cin >> a;
        s += pow(a, 2);
    }
    h = d + s;
    cout << "Искомое значение h= " << h << endl;
}
