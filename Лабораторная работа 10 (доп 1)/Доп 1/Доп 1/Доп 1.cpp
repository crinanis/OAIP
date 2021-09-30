#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    char tmp[33];
    int A, count = 0;
    cout << "Введите целое число А:\n" << endl;
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном представлении: " << tmp << endl;
    A = A >> 2;
    for (int i = 2; i < 11; i++) {
        if (A % 2 == 0)
            count++;
        A /= 2;
    }
    cout << "Число нулей в числе равно: " << count << endl;
}
