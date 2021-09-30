#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double s = 0;
    int p[10] = { 1, -2, -5, 6, -8, -22, 44, 64, -72, 8 };
    for (int i = 0; i <= 9; i++){
        if (p[i] % 2 == 0) {
            s = s + p[i];
            cout << "Чётные эелементы массива: " << p[i] << "\n" ;
        }
    }
    cout << "Сумма чётных элементов массива: " << s;

}

