#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void insertionSort(int arr[], int n) {		//сортировка простой вставкой
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];						//сохранить
		j = i - 1;							//уменьшение размера унупорядоченной части
		while (j >= 0 && arr[j] > key) {    //поиск места вставки
			arr[j + 1] = arr[j];			//сдвиг элемента
			j = j - 1;
		}
		arr[j + 1] = key;					//вставка очередного на место первого большего его
	}
}

void main() {
	setlocale(LC_ALL, "rus");
	int A[15], B[15] = { -5,-4,-3,-2,-1,0,1,2,3,4,5 }, flag = 0, num = 15;
	srand(time(NULL));
	cout << "Исходный массив\n" << "A: ";
	for (int i = 0; i < 15; i++)
	{
		A[i] = -5 + rand() % 10;
		cout << A[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 15; i++)
	{
		for (int k = 0; k < 15; k++)
		{
			if (B[i] == A[k]) {
				flag++;
				if (flag > 1) {
					A[k] = 6;
					num--;
				}
			}
		}
		flag = 0;
	}
	cout << endl;
	cout << "Удаляем повторяющиеся элементы\n" << "A: ";
	for (int i = 0; i < 15; i++)
	{
		if (A[i] != 6)
			cout << A[i] << " ";
	}
	cout << endl << endl;
	insertionSort(A, 15);
	cout << "Упорядочиваем массив\n"<< "A: ";
	for (int i = 0; i < num; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}