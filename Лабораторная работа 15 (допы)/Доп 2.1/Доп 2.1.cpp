//12-я лаба в4. Написать программу, которая удаляет в строке все буквы b в тексте, написанном латинскими буквами.
#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int* udalb(char* s, char b, int n);
	char s[256], b = 'b';
	cout << "Введите строку: ";
	gets_s(s);
	int n = strlen(s);
	*udalb(s, b, n);
}
int* udalb(char* s, char b, int n)
{
	int i = 0, j = 0;
	 while (i < n)
	 {
		if (s[i] == b)
		{
			for (j = i; j < n; j++)
			{
				s[j] = s[j + 1];
			}
			n--;
		}
		else i++;
	 }
	puts(s);
	return 0;

}