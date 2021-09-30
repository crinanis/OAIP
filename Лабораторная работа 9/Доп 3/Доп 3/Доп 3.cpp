#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "russian");
	const int size = 100;
	int min = 0, max = 99, sz, count = 0;
	int K[size];
	cout << "Введите размер массива: ";
	cin >> sz;
	srand((unsigned)time(NULL));
	for (int i = 0; i < sz; i++) {
		K[i] = (int)((double)rand() / ((double)RAND_MAX) * max);
		cout << "Элементы полученного массива: " << K[i] << endl;
	}

	for (int z = 0; z < sz; z++) {
		if (K[z] == K[z + 1]) {
			count += 1;
		}
	}

	cout << "Количество пар с одинаковыми значениями равно: " << count << endl;
}