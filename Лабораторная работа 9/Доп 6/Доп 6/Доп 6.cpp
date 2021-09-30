#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_CTYPE, "russian");
    int f = 0;
    int m[] = { 1, 2, 4, 7, 54, 6, 5, 10, 6, 47, 3, 5, 8 };
    for (int i = 0; i < 13; i++) {
        if ((m[i - 1] + m[i]) == m[i + 1]) {
            f += 1;
        }
    }
    if (f > 0) {
        cout << "В массиве есть числа Фиббоначи" << endl;
    }
    else {
        cout << "В массиве нет чисел Фиббоначи" << endl;
    }

}