#include <iostream> 
using namespace std;
//1.	Ввести целое число A.Инвертировать все биты с 2 по 14, включая эти биты.Вывести результат.


int main()
{
	setlocale(LC_CTYPE, "russian");
	char tmp[33];
	int A;
	cout << "Введите целое число А:\n"<< endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном представлении - " << tmp << endl;
	int a = 16382;
	_itoa_s(a, tmp, 2);
	cout << "Маска: " << tmp << endl;

	_itoa_s((A ^ a), tmp, 2);

	cout << "А с инвертированными битами: "<< tmp << endl;
}