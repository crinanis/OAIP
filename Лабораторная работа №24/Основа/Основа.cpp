#include<iostream> 
using namespace std;
#include "MyQueue.h"

int main() {
	setlocale(LC_ALL, "Ru");
	Number* begin = NULL, * end, * t, * o, * v, * x, * y;
	int c;
	t = new Number;
	int p, size;
	do {
		cout << "Что делать?" << endl;
		cout << "1 - Добавление элемент" << endl;
		cout << "2 - Вывод очередь" << endl;
		cout << "3 - Удалить элемент" << endl;
		cout << "4 - Вывести количество элементов между минимальным и максимальным" << endl;
		cin >> c;
		switch (c)
		{
		case 1: cout << "\nВведите размер очереди = ";
			cin >> size;
			cout << "Введите число = ";
			cin >> p;
			create(&begin, &end, p);
			t->info = p;
			t->next = NULL;
			begin = end = t;
			for (int i = 1; i < size; i++)
			{
				cout << "Введите число = ";
				cin >> p;
				create(&begin, &end, p);
			}

			break;
		case 2:
			cout << "\nЭлементы очереди: \n";
			if (begin == NULL) cout << "Нет элементов" << endl;
			else
				view(begin);

			break;
		case 3:
			cout << "Какое число удалить?" << endl;
			cin >> p;
			del(begin, p);
			break;
		case 4:
			cout << "Количество элементов между минимальным и максимальным: " << endl;
			counting(begin);
			break;
		}
	} while (c != 5);
}
