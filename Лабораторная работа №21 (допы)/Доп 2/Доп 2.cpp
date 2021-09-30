#include <iostream>
#include <string>
#define size 30
using namespace std;

int decision;
int dday, mmonth;

void add();
void del();
void show();
void search();

struct date {
	unsigned day : 5;
	unsigned month : 7;
};

enum faculty {
	IT = 1, economics, civil_engineering, mechanical_engineering, innovation, extra_mural
} fa;

struct Students {
	string snp;
	date entrance;
	string speciality;
	int group;
	faculty fa;
	float aver;
} student[size], zero;

int codow = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите:\n";
	cout << "Добавить запись - 1\n";
	cout << "Удалить запись - 2\n";
	cout << "Вывести запись - 3\n";
	cout << "Поиск по среднему баллу- 4\n";
	cout << "Выход - 5\n";
	cin >> decision;
	do {
		switch (decision) {
		case 1: add(); break;
		case 2: del(); break;
		case 3: show(); break;
		case 4: search(); break;
		case 5: return 0;
		}
	} while (true);
}

void add() {
	int o, t;
	fa = IT;
	if (codow < size) {
		cout << "ФИО - ";
		cin >> student[codow].snp;
		cout << "День поступления - ";
		cin >> dday;
		student[codow].entrance.day = dday;
		cout << "Месяц поступления - ";
		cin >> mmonth;
		student[codow].entrance.month = mmonth;
		cout << "Специальность - ";
		cin >> student[codow].speciality;
		cout << "Группа - ";
		cin >> student[codow].group;
		cout << "Введите название факультета (IT - 1, economics - 2, civil_engineering - 3, mechanical_engineering - 4, innovation - 5, extra_mural - 6) - ";
		cin >> o;
		t = (int)fa - o;
		if (t == 0) {
			student[codow].fa = IT;
		}
		else if (t == 1) {
			student[codow].fa = economics;
		}
		else if (t == 2) {
			student[codow].fa = civil_engineering;
		}
		else if (t == 3) {
			student[codow].fa = mechanical_engineering;
		}
		else if (t == 4) {
			student[codow].fa = innovation;
		}
		else if (t == 5) {
			student[codow].fa = extra_mural;
		}

		cout << "Средний балл - ";
		cin >> student[codow].aver;

		codow++;
	}
	else {
		cout << "Вы ввели максимальное количество записей";
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
	cout << endl;
}

void del() {
	int purge;
	cout << "Введите номер записи, которую необходимо удалить" << endl;
	cout << "Чтобы удалить все записи, введите '101'" << endl;
	cin >> purge;
	if (purge != 101)
	{
		for (int de = (purge - 1); de < codow; de++)
			student[de] = student[de + 1];
		codow = codow - 1;
	}
	if (purge == 101)
		for (int i = 0; i < size; i++)
		{
			student[i] = zero;
			codow = 0;
		}
	cout << "Что делать дальше?" << endl;
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
		cout << "\nФИО - ";
		cout << student[no - 1].snp << endl;
		cout << "День поступления - ";
		cout << student[no - 1].entrance.day << endl;
		cout << "Месяц поступления - ";
		cout << student[no - 1].entrance.month << endl;
		cout << "Специальность - ";
		cout << student[no - 1].speciality << endl;
		cout << "Группа - ";
		cout << student[no - 1].group << endl;
		cout << "Название факультета - ";
		cout << student[no - 1].fa << endl;
		cout << "Средний балл - ";
		cout << student[no - 1].aver << endl;
	};
	if (choice == 2) {
		for (int i = 0; i < codow; i++) {
			cout << "\nФИО - ";
			cout << student[i].snp << endl;
			cout << "День поступления - ";
			cout << student[i].entrance.day << endl;
			cout << "Месяц поступления - ";
			cout << student[i].entrance.month << endl;
			cout << "Специальность - ";
			cout << student[i].speciality << endl;
			cout << "Группа - ";
			cout << student[i].group << endl;
			cout << "Название факультета - ";
			cout << student[i].fa << endl;
			cout << "Средний балл - ";
			cout << student[i].aver << endl;
		}
	};
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}

void search() {
	float sr;
	cout << "Введите средний балл, по которому следует осуществить поиск - ";
	cin >> sr;
	for (int i = 0; i < codow; i++) {
		if (sr == student[i].aver) {
			cout << "ФИО - ";
			cout << student[i].snp << endl;
			cout << "День поступления - ";
			cout << student[i].entrance.day << endl;
			cout << "Месяц поступления - ";
			cout << student[i].entrance.month << endl;
			cout << "Специальность - ";
			cout << student[i].speciality << endl;
			cout << "Группа - ";
			cout << student[i].group << endl;
			cout << "Название факультета - ";
			cout << student[i].fa << endl;
			cout << "Средний балл - ";
			cout << student[i].aver << endl;
		}
	}
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}