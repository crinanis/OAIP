//Вариант 2 (12-я лаба) Написать программу, реализующую выделение подстроки S1 длиной k с позиции номер n из строки. 

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int k, n;
	int* h(char* str, char* str2, int d, int n, int k);
	char r, str[255], str2[225];
	cout << "Введите строку: " << endl;
	gets_s(str);
	cout << "Введите длину: " << endl;
	cin >> k;
	cout << "Введите позицию: " << endl;
	cin >> n;
	int d = strlen(str);
	*h(str, str2, d, n, k);
}

int* h(char* str, char* str2, int d, int n, int k)
{
	int i, j = 0, b = 0;
	for (i = n; i < d - (d - (n + k)); i++)
	{
		str2[j] = str[i];
		j++;
	}
	cout << str << endl;
	for (i = 0; i < j; i++)
	cout << str2[i];
	cout << endl;
	return 0;
}