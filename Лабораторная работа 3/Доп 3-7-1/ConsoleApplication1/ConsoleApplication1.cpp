#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;

	cout << setw(47) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;

	cout << setw(45) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;

	cout << setw(43) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;

	cout << setw(41) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
}
