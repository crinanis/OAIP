#include <iostream>
#include <string>
#define num 30
#define len 30
using namespace std;
int decision;

void add();
void show();
void find();

struct vehicle {
	int number;
	string destination;
	string days;
	string departure;
	string arrival;
} Train[num];

union un_vehicle {
	int number;
	char destination[len];
	char days[len];
	char departure[len];
	char arrival[len];
} un_Train;

int cou = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите\n";
	cout << "Добавить запись - 1\n";
	cout << "Вывести запись - 2\n";
	cout << "Найти запись - 3\n";
	cout << "Выйти из программы - 4\n";
	cin >> decision;
	int l = 10;
	do {
		switch (decision) {
		case 1: add(); break;
		case 2: show(); break;
		case 3: find(); break;
		case 4: return 0;
		default: break;
		}
	} while (l > 0);
}


void add() {
	cout << "Введите\n";
	if (cou < num) {
		cout << "Номер поезда - ";
		cin >> un_Train.number;
		Train[cou].number = un_Train.number;
		cout << "Пункт назначения - ";
		cin >> un_Train.destination;
		Train[cou].destination = un_Train.destination;
		cout << "Дни следования - ";
		cin >> un_Train.days;
		Train[cou].days = un_Train.days;
		cout << "Время отправления - ";
		cin >> un_Train.departure;
		Train[cou].departure = un_Train.departure;
		cout << "Время прибытия - ";
		cin >> un_Train.arrival;
		Train[cou].arrival = un_Train.arrival;
		cou++;
	}
	else {
		cout << "Введено максимальное количество записей. ";
	};
	cout << "Что делать дальше? - ";
	cin >> decision;
	cout << endl;
}

void show() {
	int choice;
	cout << "Сколько записей необходимо вывести?\n";
	cout << "Одну - 1\n";
	cout << "Все - 2\n";
	cin >> choice;
	if (choice == 1) {
		int k;
		cout << "Введите номер записи,которую необходимо вывести - ";
		cin >> k;
		cout << "Номер поезда - ";
		cout << Train[k - 1].number << endl;
		cout << "Пункт назначения - ";
		cout << Train[k - 1].destination << endl;
		cout << "Дни следования - ";
		cout << Train[k - 1].days << endl;
		cout << "Время отправления - ";
		cout << Train[k - 1].departure << endl;
		cout << "Время прибытия - ";
		cout << Train[k - 1].arrival << endl;
	};
	if (choice == 2) {
		for (int i = 0; i < cou;) {
			cout << "Номер поезда - ";
			cout << Train[i].number << endl;
			cout << "Пункт назначения - ";
			cout << Train[i].destination << endl;
			cout << "Дни следования - ";
			cout << Train[i].days << endl;
			cout << "Время отправления - ";
			cout << Train[i].departure << endl;
			cout << "Время прибытия - ";
			cout << Train[i].arrival << endl;
			i++;
		}
	}
	cout << "Что делать дальше? - ";
	cin >> decision;
	cout << endl;
}

void find() {
	string search;
	cout << "Введите, по какому пункту назначения необходимо осуществить поиск - ";
	cin >> search;
	for (int i = 0; i < cou; i++) {
		if (Train[i].destination == search) {
			cout << "Номер поезда - ";
			cout << Train[i].number << endl;
			cout << "Пункт назначения - ";
			cout << Train[i].destination << endl;
			cout << "Дни следования - ";
			cout << Train[i].days << endl;
			cout << "Время отправления - ";
			cout << Train[i].departure << endl;
			cout << "Время прибытия - ";
			cout << Train[i].arrival << endl;
		}
	}
	cout << "Что делать дальше? - ";
	cin >> decision;
	cout << endl;
}