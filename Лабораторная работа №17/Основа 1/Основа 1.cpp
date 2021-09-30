#include <iostream>
using namespace std;


int summa(int n, ...)
{
	int* a = &n;
	int sum = 0;
	int len = sizeof(a);
	for (int i = 0; i <= len; i++)
	{
		sum += (*(a + i)) * (*(a + i + 1));
	}
	return sum;
}
void main()
{
	cout << summa(6, 4, 5, 1, 2, 3, 0) << endl;
	cout << "-------------------------" << endl;
	cout << summa(2, 3, 7, 4, 2, 4) << endl;
	cout << "-------------------------" << endl;
	cout << summa(1, 1, 1, 1, 1, 1);
}