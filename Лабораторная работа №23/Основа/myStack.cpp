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
	if (e == NULL)	cout << "Стек пуст!" << endl;
	while (e != NULL)
	{ 
		a = e->data;   
		if (a != 0) {
			cout << a << " ";
		}
		e = e->next;
	}
	cout << endl;
}

void clear(int g, Stack* myStk) {
	if (myStk->head == NULL) {
		cout << "Стек пуст!" << endl;
	}
	else {
		while (myStk->head != NULL) {
			Stack* e = myStk->head;
			myStk->head = myStk->head->next;
			delete e;
		}
	}
}

FILE* f;
void onfail(Stack* myStk)
{
	Stack* e = myStk->head;
	int a;
	ofstream f("text.txt");
	if (f.fail()) {
		cout << "\n Ошибка открытия файла";
		exit(0);
	}
	while (e) {
		int o = e->data;
		if (o != 0) {
			o = e->data;
			f << o << " ";
		}
		e = e->next;
	}
	f.close();
	cout << "Список записан в файл\n";
}
void infail() {
	string line;
	ifstream f("text.txt");
	if (f.fail()) {
		cout << endl;
		cout << "Ошибка открытия" << endl;
		exit(1);
	}
	while (getline(f, line)) {
		cout << line << endl;
	}
	f.close();
}

void DeleteFirstNegative(Stack* myStk) {
	int j ;
	j = 0;
	Stack* e = myStk->head;
	if (e == NULL) {
		cout << "Стек пуст!" << endl; 
	}
	else {
		while (e != NULL) {
			int a = e->data;
			if (j == 0 && a < 0) {

				e->data = NULL;
				j = 1;
			}
			e = e->next;
		}
	}
}