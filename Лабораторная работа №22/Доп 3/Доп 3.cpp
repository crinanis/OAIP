//Вариант 3
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
struct list {
	int number;
	list* next;
};

void add(list*&, int);
float del(list*&, int);
int IsEmpty(list*);
void printList(list*);
void sum(list*);
void file_in(list*);
void file_out(list*);

int main() {
	setlocale(LC_ALL, "Ru");
	list* first = NULL;
	int decision;
	int value;
	cout << "Сделайте выбор:" << endl;
	cout << "Добавить число - 1" << endl;
	cout << "Удалить число - 2" << endl;
	cout << "Посчитать сумму положительных чисел, кратных 5 - 3" << endl;
	cout << "Записать данные в файл - 4" << endl;
	cout << "Прочитать данные из файла - 5" << endl;
	cout << "Выйти - 6" << endl;
	cin >> decision;
	while (decision != 6)
	{
		switch (decision)
		{
		case 1: cout << "Введите число -  ";
			cin >> value;
			add(first, value);
			printList(first);
			break;
		case 2: if (!IsEmpty(first)) {
			cout << "Введите удаляемое число - ";
			cin >> value;
			if (del(first, value)) {
				cout << "Число удалено" << endl;
				printList(first);
			}
			else cout << "Число не найдено" << endl;
		}
			  else cout << "Список пуст" << endl;
			break;
		case 3: sum(first);
			break;
		case 4: file_in(first);
			break;
		case 5: file_out(first);
			break;
		default: cout << "Неправильный выбор" << endl;
			break;
		}
		cout << endl << "Что делать дальше? ";
		cin >> decision;
		cout << endl;
	}
}

void add(list*& p, int num)
{
	list* newP = new list;
	if (newP != NULL)
	{
		newP->number = num;
		newP->next = p;
		p = newP;
	}
	else
		cout << "Операция добавления не выполнена" << endl;
}

float del(list*& p, int num)
{
	list* previous, * current, * temp;
	if (num == p->number)
	{
		temp = p;
		p = p->next;
		delete temp;
		return num;
	}
	else
	{
		previous = p;
		current = p->next;
		while (current != NULL && current->number != num)
		{
			previous = current;
			current = current->next;
		}
		if (current != NULL)
		{
			temp = current;
			previous->next = current->next;
			free(temp);
			return num;
		}
	}
	return 0;
}

int IsEmpty(list* p)
{
	return p == NULL;
}

void printList(list* p)
{
	if (p == NULL)
		cout << "Список пуст" << endl;
	else
	{
		cout << "Список:" << endl;
		while (p != NULL)
		{
			cout << "-->" << p->number;
			p = p->next;
		}
		cout << "-->NULL" << endl;
	}
}

void sum(list* p)
{
	int summary = 0;
	if (p == NULL)
		cout << "Список пуст" << endl;
	else
	{
		while (p)
		{
			if (p->number > 0 && p->number % 5 == 0) {
				summary += p->number;
			}
			p = p->next;
		}
		cout << "Сумма положительных чисел, кратных 5 = " << summary << endl;
	}
}

void file_in(list* p)
{
	list* temp = p;
	ofstream f("lab.txt");
	if (f.fail())
	{
		cout << "\n Ошибка открытия файла";
		exit(1);
	}
	while (p)
	{
		f << p->number << " ";
		p = p->next;
	}
	f.close();
	cout << "Список записан в файл\n";
}
void file_out(list* p)
{
	string line;
	ifstream f("lab.txt");
	if (f.fail())
	{
		cout << endl;
		cout << "Ошибка открытия" << endl;
		exit(1);
	}
	while (getline(f, line))
	{
		cout << line << endl;
	}
	f.close();
}