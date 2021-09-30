#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(53) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;

	cout << setw(50) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;

	cout << setw(48) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;

	cout << setw(46) << setfill(probel) << probel;
	cout << setw(24) << setfill(c) << c << endl;

	cout << setw(45) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;

	cout << setw(44) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;

	cout << setw(44) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;

	cout << setw(44) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;

	cout << setw(44) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;

	cout << setw(45) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;

	cout << setw(46) << setfill(probel) << probel;
	cout << setw(24) << setfill(c) << c << endl;

	cout << setw(48) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;

	cout << setw(50) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;

	cout << setw(53) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
}


