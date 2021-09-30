#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    double c1 = 12, c2 = 14;
    for (int i = 0; i < 13; i++) {
        c1 = c1 / 2;
        c2 = c2 + c1;
        c2 = c2 / 2;
        c1 = c1 + c2;
    }
    printf("%f7", c1);
    cout << " " << endl;
    printf("%f7", c2);
}

