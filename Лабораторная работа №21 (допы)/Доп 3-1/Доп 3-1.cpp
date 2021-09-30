#include <iostream>
#include <string>
#define size 40
using namespace std;


void add();
void show();
void search();

union un_Limbo {
	char name[size];
	char title[size];
	int price;
	int deposit;
	int date;
	int limitation;
} un_client;

struct Limbo {
	string name;
	string title;
	int price;
	int deposit;
	int date;
	int limitation;
} client[size];

int decision;
int codow = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите:\n";
	cout << "Добавить запись - 1\n";
	cout << "Вывести запись - 2\n";
	cout << "Поиск записи - 3\n";
	cout << "Выход - 4\n";
	cin >> decision;
	do {
		switch (decision) {
		case 1: add(); break;
		case 2: show(); break;
		case 3: search(); break;
		case 4: return 0;
		}
	} while (true);
}


void add()
{
	if (codow < size) {
		cout << "Имя клиента - ";
		cin >> un_client.name;
		client[codow].name = un_client.name;
		cout << "Наименование товара - ";
		cin >> un_client.title;
		client[codow].title = un_client.title;
		cout << "Стоимость товара - ";
		cin >> un_client.price;
		client[codow].price = un_client.price;
		cout << "Сумма залога - ";
		cin >> un_client.deposit;
		client[codow].deposit = un_client.deposit;
		cout << "Дата сдачи - ";
		cin >> un_client.date;
		client[codow].date = un_client.date;
		cout << "Срок хранения - ";
		cin >> un_client.limitation;
		client[codow].limitation = un_client.limitation;

		codow++;
	}
	else {
		cout << "Вы ввели максимальное количество записей";
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
	cout << endl;
}

void show()
{
	int choice;
	int no;
	cout << "Вывести одну запись - 1\n";
	cout << "Вывести все записи - 2\n";
	cin >> choice;
	if (choice == 1) {
		cout << "Введите номер записи, которую хотите вывести - ";
		cin >> no;
		cout << "\nИмя клиента -  " << client[no - 1].name << endl;
		cout << "Наименование товара -  " << client[no - 1].title << endl;
		cout << "Стоимость залога -  " << client[no - 1].deposit << endl;
		cout << "Дата сдачи - " << client[no - 1].date << endl;
		cout << "Срок хранения -  " << client[no - 1].limitation << endl;
	};
	if (choice == 2) {
		for (int i = 0; i < codow; i++) {
			cout << "Имя клиента -  " << client[i].name << endl;
			cout << "Наименование товара -  " << client[i].title << endl;
			cout << "Стоимость залога -  " << client[i].deposit << endl;
			cout << "Дата сдачи - " << client[i].date << endl;
			cout << "Срок хранения -  " << client[i].limitation << endl;
		}
	};
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}

void search()
{
	string searching;
	cout << "Введите наименование товара, который вы хотите найти:\n";
	cin >> searching;
	for (int i = 0; i < size; i++) {
		if (searching == client[i].title)
		{
			cout << "Имя клиента -  " << client[i].name << endl;
			cout << "Наименование товара -  " << client[i].title << endl;
			cout << "Стоимость залога -  " << client[i].deposit << endl;
			cout << "Дата сдачи - " << client[i].date << endl;
			cout << "Срок хранения -  " << client[i].limitation << endl;
		}
	}
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}