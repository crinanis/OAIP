// Вариант 15.Ввести массивы А и В. В массив С перенести те элементы массива А, которые меньше максимального элемента массива В. 
//Массив С отсортировать по убыванию, используя алгоритмы сортировок: «пузырек», сортировка Хоара.
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void bubbleSort(int a[], int n);
int getHoarBorder(int A[], int sm, int em);
int* sortHoar(int A[], int sm, int em);
void main() {
    setlocale(LC_ALL, "rus");
    int A[20], B[20], C[20], maxB = 0, k = 0;
    srand(time(NULL));
    cout << "A: ";
    for (int i = 0; i < 20; i++)
    {
        A[i] = 10 + rand() % 40;
        B[i] = rand() % 30;
        cout << A[i] << " ";

    }
    cout << endl;
    cout << "B: ";
    int o = 0;;
    for (int i = 0; i < 20; i++)
    {
        cout << B[i] << " ";
        o++;
        if (B[i] > maxB)
            maxB = B[i];

    }
    cout << endl;
    cout << "Максимальный элемент B: " << maxB;
    cout << endl;
    sortHoar(B, 0, 19);
    reverse(B, B + o);
    cout << "Отсортированный массив " << "B:";
    for (int i = 0; i < 20; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    cout << "C:";
    for (int i = 0; i < 20; i++)
    {

        if (A[i] < maxB) {
            C[k] = A[i];
            cout << C[k] << " ";
            k++;

        }

    }
    cout << k;
    cout << endl;
    bubbleSort(C, k);
    reverse(C, C + k);
    cout << "Отсортированный массив " << "C:";
    for (int i = 0; i < k; i++)
    {
        cout << C[i] << " ";
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

int getHoarBorder(int A[], int sm, int em)
{
    int i = sm - 1, j = em + 1;
    int brd = A[sm];
    int buf;
    while (i < j)
    {
        while (A[--j] > brd);
        while (A[++i] < brd);
        if (i < j)
        {
            buf = A[j];
            A[j] = A[i];
            A[i] = buf;
        };
    }
    return j;
}
int* sortHoar(int A[], int sm, int em)
{
    if (sm < em)
    {
        int hb = getHoarBorder(A, sm, em);
        sortHoar(A, sm, hb);
        sortHoar(A, hb + 1, em);
    }
    return A;
};


