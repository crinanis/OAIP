#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, ch;
    setlocale(LC_CTYPE, "russian");
    for (int n = 100; n < 1000; n++) {
        n1 = n / 100;
        n2 = (n / 10) % 10;
        n3 = n % 100;
        if ((n1 < n2) && (n1 < n3) && (n2 < 3)) {
            for (int k = 1; k < 32; k++) {
                ch = pow(k, 2);
                if (n == ch)
                cout << n;
           }
        }
    }
}
