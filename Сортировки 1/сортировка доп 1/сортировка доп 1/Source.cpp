
#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 10;

//сортировка пузырьком и простой вставкой

void bubbleSort(int arr[], int n) {    //сортировка пузырьком
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {   //процесс всплытия
				swap(arr[j], arr[j + 1]);  //меняем местами элементы arr[j] и arr[j + 1]
				swapped = true;
			}
		}
		if (swapped == false) break;
	}
}

void insertionSort(int arr[], int n) {   //сортировка простой вставкой
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];   //сохранить
		j = i - 1;      //уменьшение размера унупорядоченной части
		while (j >= 0 && arr[j] > key) {  //поиск места вставки
			arr[j + 1] = arr[j];   //сдвиг элемента
			j = j - 1;
		}
		arr[j + 1] = key;    //вставка очередного на место первого большего его
	}
}

void task1() {
	int a[SIZE], b[SIZE], max = -999999, bSize = 0;
	cout << "Enter " << SIZE << " elements: ";
	for (int i = 0; i < SIZE; i++) {
		cin >> a[i];
		if (!(i % 2)) b[bSize++] = a[i];     //если индекс четный
	}
	bubbleSort(b, bSize);
	insertionSort(b, bSize);
	reverse(b, b + bSize);   //меняет порядок элементов
	for (int i = 0; i < bSize; i++)
	{
		cout << b[i] << ' ';
	} cout << endl;
}

int main()
{
	task1();
	system("pause");
	return 0;
}




