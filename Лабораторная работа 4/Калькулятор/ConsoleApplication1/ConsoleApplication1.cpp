#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

    int main(){
        setlocale(LC_CTYPE, "Russian");
        double a, b, r;
        char c;
        int n, k = 5;
        while (k > 1) {
            puts("1 - калькулятор, 2 - выход");
            cin >> n;
            switch (n) {
            case 1: {
                puts("Введите первое число");
                cin >> a;
                puts("Введите второе число");
                cin >> b;
                puts("Введите операцию");
                cin >> c;
                switch (c) {
                case '-': r = a - b; break;
                case '+': r = a + b; break;
                case '*': r = a * b; break;
                case '/': r = a / b; break;
                } 
                cout << "Результат операции: " << r << endl;
                break;
            }
            case 2: {
                puts("Вы вышли");
                return 0;
                break;
                    };
            default: puts("Некорректные данные"); 
                break;
            }
        }
        }