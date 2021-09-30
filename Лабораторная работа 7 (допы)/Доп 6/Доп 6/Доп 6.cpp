#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double sum = 0, proiz = 1;
    int p[10] = { 1, -2, -5, 6, -8, -22, 44, 64, -72, 8 };
    for (int i = 0; i <= 9; i++) {
        if (p[i] < 0) {
            proiz *= p[i];
        }
        else {
            sum += p[i];
        }
    }
    cout << "Сумма положительных чисел равна: " << sum << endl;
    cout << "Произведение отрицательных чисел равно: " << proiz << endl;

}
