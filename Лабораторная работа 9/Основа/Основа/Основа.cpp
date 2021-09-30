#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "russian");
	const int size = 100;
	int nechet = 0, chet = 0;
	int min = 0, max = 99, sz, i, z, sum4=0;
	int K[size], L[size], M[size];
	cout << "Введите размер массива: ";
	cin >> sz;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++) {
		K[i] = (int)((double)rand() / ((double)RAND_MAX) * max);
		cout << "Элементы полученного массива: " << K[i] << endl;
	}

	for (z = 0; z < sz; z++) {
		if (K[z] % 2 == 0) {
			L[z] = K[z];
			chet++;
		}
		else {
			L[z] = -1;
		}

		if (K[z] % 2 != 0) {
			M[z] = K[z];
			nechet++;
		}
		else {
			M[z] = -1;
		}

	}
	for (int y = 0; y < sz; y++) {
		cout << "Массив чётных элементов: " << L[y] << endl;
		cout << "Массив нечётных элементов: " << M[y] << "\n" << endl;
	}
	cout << "Итого: " << endl;
	cout << "Всего чётных элементов: " << chet << endl;
	cout << "Всего нечётных элементов: " << nechet << endl;
	
}
