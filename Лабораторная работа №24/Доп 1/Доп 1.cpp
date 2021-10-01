#include<iostream>
using namespace std;

struct Item {
	int data;
	Item* next;
};
Item* head, * tail;

bool isNull();
void deleteFirst();
void deleteLast();
void getFromHead();
void getFromTail();
void insertToQueue(int x);
void printQueue();
void clearQueue();

int main() {
	setlocale(LC_CTYPE, "Russian");
	int i = 1, choice = 1, z; head = nullptr;  tail = nullptr;
	while (choice != 0) {
		cout << "1 - Добавить элемент" << endl;
		cout << "2 - Получить элемент с начала" << endl;
		cout << "3 - Извлечь элемент с начала" << endl;
		cout << "4 - Вывести очередь" << endl;
		cout << "5 - Очистить очередь" << endl;
		cout << "6 - Получить элемент с конца" << endl;
		cout << "0 - Выход" << endl;
		cout << "Выберите действие  ";  cin >> choice;
		switch (choice) {
		case 1: cout << "Введите элемент:  "; cin >> z;	insertToQueue(z); break;
		case 2: getFromHead(); break;
		case 3: deleteFirst(); break;
		case 4: printQueue(); break;
		case 5: clearQueue(); break;
		case 6: getFromTail(); break;
		case 7: deleteLast(); break;
		}
	}
	return 0;
}

bool isNull(void) {
	return (head == nullptr);
}

void deleteFirst() {
	if (isNull())	cout << "Очередь пуста" << endl;
	else
	{
		Item* p = head;
		head = head->next;
		delete p;
	}
}

void deleteLast() {
	if (isNull())
		cout << "Очередь пуста" << endl;
	else {
		Item* p;
		tail->data = NULL;

	}
}

void getFromHead() {
	if (isNull())
		cout << "Очередь пуста" << endl;
	else
		cout << "Начало = " << head->data << endl;
}

void getFromTail() {
	if (isNull())
		cout << "Очередь пуста" << endl;
	else
		cout << "Конец = " << tail->data << endl;
}

void insertToQueue(int x) {
	Item* p = new Item;
	p->data = x;
	p->next = nullptr;
	Item* v = new Item;
	Item* p1 = new Item;
	Item* p2 = new Item;
	int i = 0;
	if (isNull()) head = tail = p;
	else {
		p2 = head; p1 = head;
		while (p1 != nullptr) {
			if (i == 1) {
				if (i == 1) {
					if (x > p1->data ) {
						v->data = x;
						v->next = p1;
						p2->next = v;
						return;
					}
					if (x == p1->data) {
						v->data = x;
						v->next = p1->next;
						p1->next = v;
						return;
					}
					p2 = p2->next;
				}

				if (x > p1->data) {
					v->data = x;
					v->next = p1;
					head = v;
					return;
				}
				if (p1->next == nullptr) {
					v->data = x;
					v->next = nullptr;
					tail->next = v;
					tail = v;
					return;
				}
				i = 1;
				p1 = p1->next;
			}
			else {
				if (x >= p1->data) {
					v->data = x;
					v->next = p2;
					head = v;
					return;
				}
			}
			p1 = p1->next;
			i = 1;
		}
		if (p1 == NULL)	{
			v->data = x;
			v->next = tail;
			p2->next = v;
		}
	}
}

void printQueue() {
	int g;
	Item* p = new Item;
	if (isNull()) cout << "Очередь пуста" << endl;
	else {
		cout << "Очередь = ";
		p = head;
		while (!isNull()) {
			if (p != nullptr) {
				g = p->data;
				if (g == 0) {

				}
				else { cout << p->data << " "; cout << "->"; }
				p = p->next;
			}
			else {
				cout << "NULL" << endl;
				return;
			}
		}
	}
}

void clearQueue() {
	while (!isNull()) deleteFirst();
}

