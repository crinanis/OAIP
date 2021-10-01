// Вариант 1. Ввести массив А, в массив В скопировать все элементы массива А, имеющие четный индекс. 
//Массив В отсортировать по убыванию, используя алгоритмы сортировок: «пузырек», сортировка простой вставкой.
#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 20;

//сортировка пузырьком и простой вставкой

void bubbleSort(int arr[], int n) {
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false) break;
	}
}

void insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void sorting() {
	int a[SIZE], b[SIZE], max = -999999, bSize = 0;
	cout << "A: ";
	for (int i = 0; i < SIZE; i++) {
		a[i] = 10 + rand() % 40;
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "B: ";
	int i = 0; int o = 0;
	while (i < SIZE-1)
	{
		i++;
		if (i % 2 == 0) {
			int h;
			h = o;
			b[h] = a[i];
			cout << b[h] << " ";
			o++;

		}
	}
	cout << endl << "Сортировка пузырьком: " << endl;
	bubbleSort(b, o);
	reverse(b, b + o);
	for (int i = 0; i < o; i++)
	{
		cout << b[i] << ' ';
	}
	cout << endl;
	cout << endl << "Сортировка вставками: " << endl;
	insertionSort(b, o);
	reverse(b, b + o);   //меняет порядок элементов
	for (int i = 0; i < o; i++)
	{
		cout << b[i] << ' ';
	} 
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Ru");
	sorting();
	system("pause");
	return 0;
}




