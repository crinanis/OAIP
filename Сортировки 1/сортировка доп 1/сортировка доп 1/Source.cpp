
#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 10;

//���������� ��������� � ������� ��������

void bubbleSort(int arr[], int n) {    //���������� ���������
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {   //������� ��������
				swap(arr[j], arr[j + 1]);  //������ ������� �������� arr[j] � arr[j + 1]
				swapped = true;
			}
		}
		if (swapped == false) break;
	}
}

void insertionSort(int arr[], int n) {   //���������� ������� ��������
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];   //���������
		j = i - 1;      //���������� ������� ��������������� �����
		while (j >= 0 && arr[j] > key) {  //����� ����� �������
			arr[j + 1] = arr[j];   //����� ��������
			j = j - 1;
		}
		arr[j + 1] = key;    //������� ���������� �� ����� ������� �������� ���
	}
}

void task1() {
	int a[SIZE], b[SIZE], max = -999999, bSize = 0;
	cout << "Enter " << SIZE << " elements: ";
	for (int i = 0; i < SIZE; i++) {
		cin >> a[i];
		if (!(i % 2)) b[bSize++] = a[i];     //���� ������ ������
	}
	bubbleSort(b, bSize);
	insertionSort(b, bSize);
	reverse(b, b + bSize);   //������ ������� ���������
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




