#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

	cout << setw(50) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

	cout << setw(50) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

	cout << setw(50) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

	cout << setw(50) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

}