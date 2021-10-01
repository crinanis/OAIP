#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
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
void main() {
    setlocale(LC_ALL, "rus");
    int A[10], B[4],maxB = 0;
    srand(time(NULL));
    cout << "A:";
    for (int i = 0; i < 10; i++)
    {
        A[i] = 10 + rand() % 40;
        cout << A[i] << " ";
    }
    insertionSort(A, 4);
    cout << endl;
    cout << "A:";
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";

    }
    cout << endl;
    for (int i = 9,k=0; i > 5; i--,k++)
    {
        B[k] = A[i];
     

    }
    insertionSort(B, 4);

    cout << endl;
    cout << "A:";
    for (int i = 9, k = 0; i > 5; i--, k++)
    {
        A[i] = B[k];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";

    }
    cout << endl;
 
    
  




}




