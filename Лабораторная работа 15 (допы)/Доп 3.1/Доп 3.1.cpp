//12-я лаба в11. Вывести текст, составленный из последних букв всех слов.
#include <iostream>
#pragma warning(default:4716)
int test() {
    return 0;
}
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int* f(char* arr, char* tekst, int size);
    char arr[256], tekst[256];
    puts("Введите предложение");
    gets_s(arr);
    int size = strlen(arr);
    *f(arr, tekst, size);
}

int* f(char* arr, char* tekst, int size)
{
    int cou = 0, i, kol = 0, k = 0;
    for (i = 0; i <= size; i++) {
        if (arr[i] == ' ')
        {
            ++kol;
            for (int h = 0; h < kol; h++) {
                for (k; k < kol; k++)
                {
                    tekst[k] = arr[i - 1];
                }
            }
        }
    }
    cout << "Получился такой текст: " << endl;
    for (i = 0; i < kol; i++) {
        cout << tekst[i];
    }
}

