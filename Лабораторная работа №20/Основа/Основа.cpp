#include <iostream>
#include <string>
#include <fstream>
#define num 30
using namespace std;

void add();
void del();
void show();
void search();
void record();
void reading();

struct people
{
	string name;
	string surname;
	string arrival;
	string departure;
	string room;
	string placement;
} Person[num], zero;

FILE* f;
int decision;
int o = 0;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите:" << endl;
	cout << "Добавить запись - 1" << endl;
	cout << "Удалить запись - 2" << endl;
	cout << "Вывести запись - 3" << endl;
	cout << "Поиск гостя по фамилии - 4" << endl;
	cout << "Запись данных в файл - 5" << endl;
	cout << "Чтение данных из файла - 6" << endl;
	cout << "Выход - 7" << endl;
	cin >> decision;
	do
	{
		switch (decision)
		{
		case 1: add(); break;
		case 2: del();	break;
		case 3: show(); break;
		case 4: search(); break;
		case 5: record(); break;
		case 6: reading(); break;
		}
	} while (decision != 7);
}

void add() {
	if (o < num) {
		cout << "Имя - ";
		cin >> Person[o].name;
		cout << "Фамилия - ";
		cin >> Person[o].surname;
		cout << "Дата заезда(ДДММГГГГ) - ";
		cin >> Person[o].arrival;
		cout << "Дата отъезда(ДДММГГГГ) - ";
		cin >> Person[o].departure;
		cout << "Номер - ";
		cin >> Person[o].room;
		cout << "Тип размещения(lux, single, double, triple, apartments) - ";
		cin >> Person[o].placement;
		o++;
	}
	else {
		cout << "Вы ввели максимальное количество записей\n";
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
}

void del() {
	int dd;
	cout << "Введите номер записи, которую необходимо удалить\n";
	cout << "Для удаления всех записей введите 111\n";

	cin >> dd;
	if (dd != 111) {
		for (int i = 0; i < o; i++) {
			Person[i] = Person[i + 1];
			o = o - 1;
		}
	}
	if (dd == 111) {
		for (int i = 0; i < num; i++) {
			Person[i] = zero;
			o = 0;
		}
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
}

void show() {
	cout << "Что вы хотите сделать?\n";
	cout << "Вывести все записи - 0\n";
	cout << "Вывести одну запись - 1\n";
	int choose, zap;
	cin >> choose;
	if (choose == 0) {
		for (int i = 0; i < o; i++) {
			cout << "Имя - " << Person[i].name << endl;
			cout << "Фамилия - " << Person[i].surname << endl;
			cout << "Дата заезда - " << Person[i].arrival << endl;
			cout << "Дата отъезда - " << Person[i].departure << endl;
			cout << "Номер - " << Person[i].room << endl;
			cout << "Тип размещения - " << Person[i].placement << endl;
		}
	}
	if (choose == 1) {
		cout << "Введите номер записи, которую необходимо вывести\n";
		cin >> zap;
		cout << endl;
		cout << "Имя - " << Person[zap - 1].name << endl;
		cout << "Фамилия - " << Person[zap - 1].surname << endl;
		cout << "Дата заезда - " << Person[zap - 1].arrival << endl;
		cout << "Дата отъезда - " << Person[zap - 1].departure << endl;
		cout << "Номер - " << Person[zap - 1].room << endl;
		cout << "Тип размещения - " << Person[zap - 1].placement << endl;
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
}

void search() {
	string sur;
	cout << "Введите фамилию, по которой необходимо осуществить поиск\n";
	cin.get();
	getline(cin, sur);
	for (int i = 0; i < num; i++) {
		if (Person[i].surname == sur) {
			cout << "Дата заезда - ";
			cout << Person[i].arrival << endl;
			cout << "Дата отъезда - ";
			cout << Person[i].departure << endl;
			cout << "Номер - ";
			cout << Person[i].room << endl;
			cout << "Тип размещения - ";
			cout << Person[i].placement << endl;
		}
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
}

void record() {
	ofstream f("clients.txt");
	for (int i = 0; i < o; i++) {
		f << "Имя: " << Person[i].name << endl << "Фамилия: " << Person[i].surname << endl << "Дата заезда: " << Person[i].arrival << endl << "Дата отъезда: " << Person[i].departure << endl << "Номер: " << Person[i].room << endl << "Тип размещения: " << Person[i].placement << endl;
	}
	f.close();
	cout << "Что делать дальше?\n";
	cin >> decision;
}

void reading() {
	string line;
	ifstream f("clients.txt");
	while (getline(f, line))
	{
		cout << line << endl;
	}
	f.close();
	cout << "Что делать дальше?\n";
	cin >> decision;
}