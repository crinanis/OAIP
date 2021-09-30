//Вариант 15
#include <iostream>
using namespace std;

int tr(int n, ...)
{
	char tmp[33];
	int* p = &n;
	for (int i = 1; i <= n; i++, p++) {
		_itoa_s(*p, tmp, 2);
		cout << tmp << endl;
	}
	return 0;
}
int main()
{
	cout << tr(5, 4, 5, 1, 2) << endl;
	cout << "---------------" << endl;
	cout << tr(7, 4, 19, 3, 13, 5, 8) << endl;
	cout << "---------------" << endl;
	cout << tr(3, 54, 49) << endl;

}