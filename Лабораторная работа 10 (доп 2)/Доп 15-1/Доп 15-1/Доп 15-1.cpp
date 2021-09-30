#include <iostream>			
using namespace std;

//1.	Используя битовые операции проверить, кратно ли двум число А.

int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "Введите число для проверки: ";
	cin >> a;
	if (a & 1)
		cout << "Число нечетное";
	else
		cout << "Число четное";
}
