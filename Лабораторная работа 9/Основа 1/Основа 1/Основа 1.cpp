#include <iostream>
#include <ctime>
using namespace std;

//Поменять местами минимальный и максимальный элементы массива. 

void main()
{
	setlocale(LC_CTYPE, "russian");
	const int size = 100;
	int min = 0, max = 99, sz, indmax=0, indmin=0;
	int K[size];
	cout << "Введите размер массива: ";
	cin >> sz;
	srand((unsigned)time(NULL));
	for (int i = 0; i < sz; i++) {
		K[i] = (int)((double)rand() / ((double)RAND_MAX) * max);
		cout << "Элементы полученного массива: " << K[i] << endl;
	}

	for (int k = 0; k < sz; k++) {
		if (K[k]>K[indmax]) {
			indmax = k;
		}
		else if (K[k]< K[indmin]) {
			indmin = k;
		}
	}

	int maximum = K[indmax];
	K[indmax] = K[indmin];
	K[indmin] = maximum;

	for (int y = 0; y < sz; y++) {
		cout << "В ходе перемены мест максимального и минимального элемента получим: " << K[y] << endl;
	}

}
