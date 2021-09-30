#include <iostream>
    using namespace std;

    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        int arr[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
        int n = 0;
        cout << "Наш предопределённый массив: ";
        for (int i = 0; i < 10; i++) {
            if (arr[i] < 0 && arr[i + 1]>0 || arr[i] > 0 && arr[i + 1] < 0) n++;
            cout << arr[i] << " ";
        }
        cout << endl << "Знак в масиве меняется: " << n << " раз." << endl;
        return 0;
    }
