#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    int sum = 0;
    for (int k = 0; k < 200; k++) {
        if (k % 3 == 0) {
            sum = sum + k;
            cout << "Числа, кратные 3: " << k << endl;
        }
    }
    cout <<"Их сумма: " << sum << endl;
}

