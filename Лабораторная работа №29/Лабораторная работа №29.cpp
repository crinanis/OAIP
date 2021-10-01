#include "Header.h"
#include <iostream>
using namespace std;

heap::CMP cmpAAA(void* a1, void* a2)  //Функция сравнения
{
#define A1 ((AAA*)a1)
#define A2 ((AAA*)a2)
	heap::CMP
		rc = heap::EQUAL;
	if (A1->x > A2->x)
		rc = heap::GREAT;
	else
		if (A2->x > A1->x)
			rc = heap::LESS;
	return rc;
#undef A2
#undef A1 
}

//-------------------------------
int main()
{
	setlocale(LC_ALL, "rus");
	int k, choice;
	heap::Heap h1 = heap::create(30, cmpAAA);
	heap::Heap b = heap::create(30, cmpAAA);
	AAA* a1 = new AAA{ 50 };
	AAA* a2 = new AAA{ 16 };
	AAA* a3 = new AAA{ 11 };
	b.insert(a1);
	b.insert(a2);
	b.insert(a3);
	b.scan(0);
	cout << endl;
	for (;;)
	{
		cout << "1 - вывод кучи на экран" << endl;
		cout << "2 - добавить элемент" << endl;
		cout << "3 - удалить максимальный элемент" << endl;
		cout << "4 - слияние куч" << endl;
		cout << "5 - удалить i-ый элемент" << endl;
		cout << "6 - удаление минимального элемента" << endl;
		cout << "0 - выход" << endl;
		cout << "сделайте выбор" << endl;  cin >> choice;
		switch (choice)
		{
		case 0:  exit(0);
		case 1:  h1.scan(0);
			break;
		case 2: {	AAA* a = new AAA;
			cout << "введите ключ" << endl; 	cin >> k;
			a->x = k;
			h1.insert(a);
		}
			  break;
		case 3:   h1.extractMax(0);
			break;

		case 4:   h1.merge(&b);
			break;
		case 5: cout << "введите i" << endl; 	cin >> k;
			if (k < h1.size)
				h1.extractMax(k);

			break;
		case 6:
			int t; void* min;
			t = h1.Height();
			min = h1.extractMin(t);
#define A1 ((AAA*)min)
			cout << A1->x << endl;
		default:  cout << endl << "Введена неверная команда!" << endl;
		}
	} return 0;
}