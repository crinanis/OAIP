#include <iostream>
#include "myStack.h"
using namespace std;

void push(int x, Stack* myStk) {
	Stack* e = new Stack;
	e->data = x;
	e->next = myStk->head;
	myStk->head = e;
}

int pop(Stack* myStk) {
	if (myStk->head == NULL) {
		cout << "Стек пуст!" << endl;
		return -1;
	}
	else {
		Stack* e = myStk->head;
		int a = myStk->head->data;
		myStk->head = myStk->head->next;
		delete e;
		return a;
	}
}

void show(Stack* myStk) {
	Stack* e = myStk->head;
	int a;
	if (e == NULL) cout << "Стек пуст!" << endl;
	while (e != NULL) {
		a = e->data;
		cout << a << " ";
		e = e->next;
	}
	cout << endl;
}

void clear(int g, Stack* myStk) {
	if (myStk->head == NULL) {
		cout << "Стек пуст!" << endl;
	}
	else
	{
		while (myStk->head != NULL)	{
			Stack* e = myStk->head;
			myStk->head = myStk->head->next;
			delete e;
		}
	}
}

void poisk(Stack* myStk) {
	Stack* e = myStk->head;
	int a;
	if (e == NULL)
		cout << "Стек пуст!" << endl;
	while (e != NULL)
	{
		a = e->data;
		cout << a << " ";
		e = e->next;
	}
	cout << endl;
}

FILE* f;
void onfail(Stack* myStk)
{
	Stack* e = myStk->head;
	int a;
	ofstream f("mList.txt");
	if (f.fail())
	{
		cout << "\n Ошибка открытия файла";
		exit(0);
	}
	while (e)
	{

		a = e->data;
		f << a << " ";
		e = e->next;
	}
	f.close();
	cout << "Список записан в файл\n";
}

void infail()
{
	string line;
	ifstream f("mList.txt");
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

void fun(Stack* myStk) {
	int n;
	int h;
	n = 0;
	h = 0;
	Stack* e = myStk->head;
	int a;
	if (e == NULL)
		cout << "Стек пуст!" << endl;
	for (int i = 0; i < 100; i++)
	{
		e = myStk->head;
		while (e != NULL)
		{
			a = e->data;
			if (a == i) {
				n = n + 1;
			}
			e = e->next;
		}
		if (n > 1)
		{
			h++;
		}
		n = 0;
	}
	cout << "Количество повторяющихся элементов стека равно: ";
	cout << h;
	cout << endl;
}