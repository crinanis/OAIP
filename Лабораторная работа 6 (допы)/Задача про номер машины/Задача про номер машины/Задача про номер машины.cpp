#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    int sum = 0, n1, n2, n3, n4;
    for (int n = 1000; n < 10000; n++) {
        n1 = n / 1000;
        n2 = (n / 100) % 10;
        n3 = (n / 10) % 10;
        n4 = n % 10;
        sum = n1 + n2 + n3 + n4;
        if ((sum == 30) && (n % 7 == 0) && (n % 2 == 0) && (n % 11 == 0) && ((n1 == n2) || (n1 == n3) || (n1 == n4) || (n4 == n2) || (n3 == n2) || (n3 == n4))){
            cout << n;
        }
    }

}

