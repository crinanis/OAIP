#include <iostream>
#include "myStack.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int choice;
	int g;
	g = 0;
	Stack* myStk = new Stack;
	myStk->head = NULL;
	for (;;) {
		cout << "Выберите команду:" << endl;
		cout << "1 - Добавление элемента в стек" << endl;
		cout << "2 - Извлечение элемента из стека" << endl;
		cout << "3 - Вывод стека" << endl;
		cout << "4 - Очищение стека" << endl;
		cout << "5 - Ввод в файл" << endl;
		cout << "6 - Вывод из файла" << endl;
		cout << "7 - Подсчитать количество повторяющихся элементов" << endl;
		cin >> choice;
		switch (choice) {
		case 1: cout << "Введите элемент: " << endl;
			cin >> choice;
			push(choice, myStk);
			++g;
			break;
		case 2: choice = pop(myStk);
			if (choice != -1) cout << "Извлеченный элемент: " << choice << endl;
			break;
		case 3: cout << "Весь стек: " << endl;
			show(myStk);
			break;
		case 4:
			clear(g, myStk);
			break;
		case 5: cout << "Весь стек: " << endl;
			onfail(myStk);
			break;
		case 6:
			infail();
			break;
		case 7:
			fun(myStk);
			break;
		}
	}
	return 0;
}
