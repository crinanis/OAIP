#include <iostream>

using namespace std;

struct Stack {
	char data[50] = {};
	Stack* next;
};

Stack* peer = NULL;
Stack* myStk;

void push();
void show_swiped();

void main() {

	setlocale(LC_CTYPE, "Rus");
	int choice;

	for (;;) {
		cout << " 1 - Добавить элемент" << endl;
		cout << " 2 - Вывести содержимое" << endl;
		cin >> choice;

		switch (choice)	{
		case 1: push();	break;
		case 2: show_swiped();	break;
		}
	}
}

void push() {
	char buff[50] = {};
	cout << "Введите слово" << endl;
	cin >> buff;
	int len = strlen(buff);
	for (int i = 0; i < len / 4; i++) {
		swap(buff[i], buff[(len - 1) / 2 - i]);
	}
	for (int i = len / 2; i < len - len / 4; i++) {
		swap(buff[i], buff[(len - 1) - (i - len / 2)]);
	}
	myStk = new Stack;
	for (int i = 0; i < strlen(buff); i++) {
		myStk->data[i] = buff[i];
	}
	myStk->next = peer;
	peer = myStk;
}

void show_swiped() {
	Stack* place = myStk;
	cout << "Вывод всех строк : " << endl;
	while (place) {
		cout << place->data << endl;
		place = place->next;
	}
}

