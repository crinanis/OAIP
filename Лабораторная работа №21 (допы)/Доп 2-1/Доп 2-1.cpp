#include <iostream>
#include <string>
#define len 30
int day, month;

using namespace std;

void add();
void show();
void search();

enum capital
{
	Tokyo = 1, Ottava, Vashington, Minsk
} cap;

struct Country {
	string title;
	string president_surname;
	int population;
	int area;
	capital cap;
} country[len];

union un_Country {
	char title[len];
	char president_surname[len];
	int population;
	int area;
	capital cap;
} un_country;


int decision;
int codow = 0;

int main() {
	setlocale(LC_CTYPE, "Russian");
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

void add() {
	int o, t;
	cap = Tokyo;
	if (codow < len) {
		cout << "Введите название страны (Япония, Канада, США, Беларусь) - ";
		cin >> un_country.title;
		country[codow].title = un_country.title;
		cout << "Столица (Токио - 1, Оттава - 2, Вашингтон - 3, Минск - 4 ) - ";
		cin >> o;
		t = (int)cap - o;
		if (t == 0) {
			country[codow].cap = Tokyo;
		}
		else if (t == 1) {
			country[codow].cap = Ottava;
		}
		else if (t == 2) {
			country[codow].cap = Vashington;
		}
		else {
			country[codow].cap = Minsk;
		}
		cout << "Фамилия президента - ";
		cin >> un_country.president_surname;
		country[codow].president_surname = un_country.president_surname;
		cout << "Численность -  ";
		cin >> un_country.population;
		country[codow].population = un_country.population;
		cout << "Площадь - ";
		cin >> un_country.area;
		country[codow].area = un_country.area;
		
		codow++;
	}
	else {
		cout << "Вы ввели максимальное количество записей";
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
	cout << endl;
}

void show() {
	int choice;
	int no;
	cout << "Вывести одну запись - 1\n";
	cout << "Вывести все записи - 2\n";
	cin >> choice;
	if (choice == 1) {
		cout << "Введите номер записи, которую хотите вывести - ";
		cin >> no;
		cout << "Название - ";
		cout << country[no - 1].title << endl;
		cout << "Столица - ";
		cout << country[no - 1].cap << endl;
		cout << "Фамилия президента - ";
		cout << country[no-1].president_surname << endl;
		cout << "Численность -  ";
		cout << country[no - 1].population << endl;
		cout << "Площадь - ";
		cout << country[no - 1].area << endl;
	};
	if (choice == 2) {
		for (int i = 0; i < codow; i++) {
			cout << "Название - ";
			cout << country[i].title << endl;
			cout << "Столица - ";
			cout << country[i].cap << endl;
			cout << "Фамилия президента - ";
			cout << country[i].president_surname << endl;
			cout << "Численность -  ";
			cout << country[i].population << endl;
			cout << "Площадь - ";
			cout << country[i].area << endl;
		}
	};
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}

void search() {
	string yo;
	cout << "Введите название страны, по которой следует осуществить поиск - ";
	cin >> yo;
	for (int i = 0; i < codow; i++) {
		string p = country[i].title;
		if (yo == country[i].title) {
			cout << "Название - ";
			cout << country[i].title << endl;
			cout << "Столица - ";
			cout << country[i].cap << endl;
			cout << "Фамилия президента - ";
			cout << country[i].president_surname << endl;
			cout << "Численность -  ";
			cout << country[i].population << endl;
			cout << "Площадь - ";
			cout << country[i].area << endl;
		}
	}
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}