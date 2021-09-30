#include <iostream>
#include <fstream>

using namespace std;

struct Stack {
	int data;
	Stack* head;
	Stack* next;
};

void add();
void check(Stack* myStk);
void show(Stack* myStk);
void search_string_num(Stack* myStk);

int main() {
	setlocale(LC_ALL, "Rus");
	Stack* myStk = new Stack;
	myStk->head = NULL;
	for (;;) {
		cout << "Выберите команду:" << endl;
		cout << "1 - Ввод строк в файл" << endl;
		cout << "2 - Ввод длин строк из файла в стек " << endl;
		cout << "3 - Вывод длин каждой строчки" << endl;
		cout << "4 - Поиск самой короткой строки и её номера" << endl;
		cout << "5 - Выход" << endl;
		int decision;
		cin >> decision;
		switch (decision) {
		case 1:
			add();
			break;
		case 2:
			check(myStk);
			break;
		case 3: cout << "\nВесь стек: " << endl;
			show(myStk);
			break;
		case 4:
			search_string_num(myStk);
			break;
		case 5: return 0;
			break;
		}
	}
}

void push(int x, Stack* myStk) {
	x = x - 1;
	Stack* e = new Stack;
	e->data = x;
	e->next = myStk->head;
	myStk->head = e;
}

void add() {
	setlocale(LC_ALL, "Russian");
	ofstream frm("text.txt");
	if (!frm.is_open()) {
		cout << "Ошибка открытия";
	}
	else {
		frm << "Желаю Вам доброго вечера!\r\nКак ваше настроение?\r\nХорошо.\r\nА у Вас?\r\nТоже, благодарю. ";
		frm.close();
	}
}

void check(Stack* myStk) {
	ifstream frm("text.txt", ios_base::in);
	if (!frm.is_open()) {
		cout << "Ошибка открытия";
	}
	else {
		int l;
		while (!frm.eof()) {
			char low[50];
			frm.getline(low, 50);
			l = strlen(low);
			push(l, myStk);
		}
	}
}

void show(Stack* myStk) {
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

void search_string_num(Stack* myStk) {
	Stack* e = myStk->head;
	int a;
	if (e == NULL)
		cout << "Стек пуст!" << endl;
	int k = 100000000;
	int y = 0;
	int q = 1;
	while (e != NULL) {
		if (e->data <= k) {
			k = e->data;
			y = q;
		}
		q++;
		e = e->next;
	}
	q = q - y;
	cout << "Длина минимальной строки: " << k << endl;
	cout << "Номер этой строки: " << q;
	cout << endl;
}

