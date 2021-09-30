#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    double q = 0;
    double x[6] = { 3,-2,0.7,-1,-2,-7 };
    double y[6] = { 1,5,-1.2,6,9,-4 };
    for (int i = 0; i <= 5; i++) {
        q = q + (x[i] * y[i]);
    }
    cout << "Искомое значение q= " << q << endl;
}
