#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "russian");
    double M[] = { 12, 25, 33, 46, 75, 96, 17, 48, 39, 51 };
    int i, l, sum = 0;
    double srednee;

    for (i = 0; i < 10; i++) {
        sum += M[i];
    }
    srednee = sum / 10;

    cout << "Среднее арифметическое равно: " << srednee << endl;
    cout << "\n" << endl;

    int k = 1;

    for (i = 0; i < 10 - 1; i++) {
        for (l = k; l < 10; l++) {
            if (M[l] > srednee) {
                int t = M[i];
                M[i] = M[l];
                M[l] = t;
                k = l + 1;
                break;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%2.00f ", M[i]);
    }
}
