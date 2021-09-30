#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;

//Доп №5. Отредактировать заданное предложение, удаляя из него все слова с нечетными номерами и переворачивая слова с четными номерами. Пример: HOW DO YOU DO -> OD OD.-----------------------------------------------------
//
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//    char arr[256];
//    int size, i, k, pos = 0, a = 0;
//    puts("Введите предложение: ");
//    gets_s(arr);
//    size = strlen(arr);
//
//    for (i = 0; i <= size; i++)
//    {
//	   if (arr[i] == ' ')
//	   {
//		   pos++;
//		   if (pos % 2 == 0)
//		   {
//			   for (k = i - 1; k > a; k--)
//			   cout << arr[k];
//			   cout << " ";
//		   }
//		   else a = i;
//
//	   }
//    }
//}

/// Доп №2. В заданном предложении указать слово, в котором доля гласных (A, E, I, O, U — строчных или прописных) максимальна.----------------------------------------------------------------------------------------------

//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//    char s[256];
//    int glMax = 0, proverka = 0, i, j, n, z = 0;
//    string max = " ", test = " ";
//    puts("Введите предложение: ");
//    gets_s(s);
//    n = strlen(s);
//    s[n] = '\0';
//
//   for (i = 0; i < n; i++)
//   {
//	   if (s[i] == ' ')
//	   {
//		   z = i;
//		   for (i = n; i < z; i++)
//		   {
//			   n = z;
//				   test += s[i];
//				   if(s[i] == 'a' || s[i] == 'A' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I') proverka++;	
//		   }
//		   if (proverka >= glMax)
//		   {
//			   max = test;
//			   test = ' ';
//			   glMax = proverka;
//			   proverka = 0;
//		   }
//		   else
//		   {
//		  	   test = ' ';
//		   }
//	   }
//   }
//
//   cout << max;
//}

//  Доп №1. В заданной последовательности слов найти все слова, имеющие заданное окончание.--------------------------------------------------------------------------------------------------------------------------------

//int main()
//{
//	setlocale(LC_ALL, "ru");
//	char s[256], ok[256];
//	string sovpad = " ";
//
//	puts("Введите слова: ");
//	gets_s(s);
//	puts("Введите окончание: ");
//	gets_s(ok);
//	cout << "\n";
//	int size = strlen(s);
//	int sizeO = strlen(ok);
//	int p, k, l, j, piv = 0, ind_last = size;
//
//
//	for (int i = 0; i < size; i++) {
//		if (s[i] == ' ') {
//			p = i - 1;
//			k = sizeO - 1;
//			j = i - 3;
//
//			for (p, k; p > j; p--, k--) {
//				if (s[p] == ok[k]) {
//					piv = piv + 1;
//				}
//				else piv = 0;
//			}
//			if (piv == 2) {
//				for (l = 9; l < ind_last; l++) {
//					sovpad += s[l];
//				}
//			}
//			if (piv == 4) {
//				for (l = 9; l < ind_last; l++) {
//					sovpad += s[l];
//				}
//			}
//		}
//	}
//	cout << sovpad;
//}