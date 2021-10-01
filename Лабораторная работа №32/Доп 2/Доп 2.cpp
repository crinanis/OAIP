// Вариант 12. Ввести массив А. В массив В скопировать элементы массива А, имеющие четный индекс. 
//Массив В отсортировать по возрастанию, используя алгоритмы сортировок: «пузырек», сортировка выбором. 
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void bubbleSort(int a[], int n);
void selectSort(int A[], int size);
void main() {
    setlocale(LC_ALL, "rus");
    int A[20], B[20];
    srand(time(NULL));
    cout << "A:";
    for (int i = 0; i < 20; i++)
    {
        A[i] = 10 + rand() % 40;

        cout << A[i] << " ";

    }
    cout << endl;
    cout << "B:";
    for (int i = 0, t = 0; i < 10; i++, t = t + 2)
    {
        B[i] = A[t];
        cout << B[i] << " ";
    }
    cout << endl;
    cout << endl;
    selectSort(B, 10);
    cout << "Сортировка выбором: " << "B:";
    for (int i = 0; i < 10; i++)
    {
        cout << B[i] << " ";
    }

    cout << endl;
    bubbleSort(B, 10);
    cout << "Пузырьковая сортировка:  " << "B:";
    for (int i = 0; i < 10; i++)
    {
        cout << B[i] << " ";
    }
}

void bubbleSort(int a[], int n)
{
    int i, j, t;
    for (i = 1; i < n; i++)
        for (j = n - 1; j >= i; j--)
            if (a[j - 1] > a[j])
            {
                t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
}

void selectSort(int A[], int size)
{
    int k, i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1, k = i; j < size; j++)
            if (A[j] < A[k])
                k = j;
        int c = A[k];
        A[k] = A[i];
        A[i] = c;
    }
}



