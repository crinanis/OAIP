﻿//2. Написать программу, реализующую выделение подстроки S1 длиной k с позиции номер n из строки.--------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "Ru");
//	char s1[256];
//	char str[256];
//	int n, k, i, z;
//
//	printf("Введите строку: ");
//	gets_s(str);
//
//	cout << "Введите, с какой позиции выделять подстроку: " << endl;
//	cin >> n;
//	cout << "Введите длину строки, которую необходмо выделить: " << endl;
//	cin >> k;
//
//	for (i = 0; i < k; i++) {
//		s1[i] = str[n-1];
//		n += 1;
//	}
//
//	for (i = 0; i < k; i++)
//		cout << s1[i];
//}

//С помощью указателей---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//int main()
//{
//	setlocale(LC_ALL, "Ru");
//	char s1[256];
//	char str[256];
//	int n, k, i, z;
//
//	cout << "Введите строку: " << endl;
//	cin >> str;
//
//	cout << "Введите, с какой позиции выделять подстроку: " << endl;
//	cin >> n;
//	cout << "Введите длину строки, которую необходмо выделить: " << endl;
//	cin >> k;
//
//	int p = n + k;
//
//	for (i = 0; i < k; i++) {
//		*(s1+i) = *(str+n-1);
//		n += 1;
//	}
//
//	for (i = 0; i < k; i++)
//		cout << *(s1 + i);
//	cout << endl;
//}

//5. Исключить из строки группы символов, расположенные между скобками вместе со скобками. Предполагается, что нет вложенных скобок.---------------------------------------------------------------------------------------

void main()
{
    setlocale(LC_CTYPE, "russian");
    char s[256];
    int i, count = 0;
    int ind_last = 0, ind_first = 0, skobka = 0;
    cout << "Введите строку: " << endl;
    cin >> s;
    int size = strlen(s);

    for (i = 0; i < size; i++) {
        if (s[i] == '(') {
            ind_first = i;
            break;
        }
    }

    for (i = 0; i < size; i++) {
        if (s[i] == ')') {
            ind_last = i;
        }
    }

    for (i = 0; i < size; i++) {
        if (s[i] == '(' || s[i] == ')') {
            skobka += 1;
        }
    }

    int k = ind_last - ind_first + 1;

    while (skobka > 0) {
        for (int z = 0; z < k; z++) {
            for (i = ind_first; i < size; i++) {
                s[i] = s[i + 1];
                skobka--;
            }
        }
    }

    cout << "Получаем строку: " << s << endl;
}

//С помощью указателей-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//void main()
//{
//    setlocale(LC_CTYPE, "russian");
//    char s[256];
//    int i, count = 0;
//    int ind_last = 0, ind_first = 0, skobka = 0;
//    cout << "Введите строку: " << endl;
//    cin >> s;
//    int size = strlen(s);
//
//    for (i = 0; i < size; i++) {
//        if (*(s+i) == '(') {
//            ind_first = i;
//            break;
//        }
//    }
//
//    for (i = 0; i < size; i++) {
//        if (*(s+i) == ')') {
//            ind_last = i;
//        }
//    }
//
//    for (i = 0; i < size; i++) {
//        if (*(s+i) == '(' || *(s+i) == ')') {
//            skobka += 1;
//        }
//    }
//
//    int k = ind_last - ind_first + 1;
//
//    while (skobka > 0) {
//        for (int z = 0; z < k; z++) {
//            for (i = ind_first; i < size; i++) {
//                *(s+i) = *(s+i+1);
//                skobka--;
//            }
//        }
//    }
//
//    cout << "Получаем строку: " << s << endl;
//}
