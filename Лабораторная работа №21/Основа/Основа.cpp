#include <iostream>;
#include <string>;
#define records 30

using namespace std;
int dday, mmonth, yyear;

void add();
void del();
void show();
void search();
int decision;

struct date {
	unsigned day : 5;
	unsigned month : 7;
	unsigned year : 12;
};

enum sex {
	female = 1, male
}s;

struct citizen {
	string name;
	string surname;
	date birth;
	string adress;
	sex s;
};

citizen Person[records];
citizen zero;

int codow = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите:\n";
	cout << "Добавить запись - 1\n";
	cout << "Удалить запись - 2\n";
	cout << "Вывести запись - 3\n";
	cout << "Поиск по дате рождения- 4\n";
	cout << "Выход - 5\n";
	cin >> decision;
	int l = 10;
	do {
		switch (decision) {
		case 1: add(); break;
		case 2: del(); break;
		case 3: show(); break;
		case 4: search(); break;
		case 5: return 0;
		}
	} while (l > 0);
}

void add() {
	int o, t;
	s = female;
	if (codow < records) {
		cout << "Имя - ";
		cin >> Person[codow].name;
		cout << "Фамилия - ";
		cin >> Person[codow].surname;
		cout << "День рождения - ";
		cin >> dday;
		Person[codow].birth.day = dday;
		cout << "Месяц рождения - ";
		cin >> mmonth;
		Person[codow].birth.month = mmonth;
		cout << "Год рождения - ";
		cin >> yyear;
		Person[codow].birth.year = yyear;
		cout << "Пол(female - 1, male - 2) - ";
		cin >> o;
		t = (int)s - o;
		if (t == 0) {
			Person[codow].s = female;
		}
		else {
			Person[codow].s = male;
		}
		cout << "Адрес - ";
		cin >> Person[codow].adress;
		cout << endl;

		codow++;
	}
	else {
		cout << "Вы ввели максимальное количество записей";
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
	cout << endl;
}

void del()
{
	int purge;
	cout << "Введите номер записи, которую необходимо удалить" << endl;
	cout << "Чтобы удалить все записи, введите '101'" << endl;
	cin >> purge;
	if (purge != 101)
	{
		for (int de = (purge - 1); de < codow; de++)
			Person[de] = Person[de + 1];
		codow = codow - 1;
	}
	if (purge == 101)
		for (int i = 0; i < records; i++)
		{
			Person[i] = zero;
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
		cout << "\nИмя - ";
		cout << Person[no - 1].name << endl;
		cout << "Фамилия - ";
		cout << Person[no - 1].surname << endl;
		cout << "День рождения - ";
		cout << Person[no - 1].birth.day << endl;
		cout << "Месяц рождения - ";
		cout << Person[no - 1].birth.month << endl;
		cout << "Год рождения - ";
		cout << Person[no - 1].birth.year << endl;
		cout << "Пол - ";
		cout << Person[no - 1].s << endl;
		cout << "Адрес - ";
		cout << Person[no - 1].adress << endl;
	};
	if (choice == 2) {
		for (int i = 0; i < codow; i++) {
			cout << "Имя - ";
			cout << Person[i].name << endl;
			cout << "Фамилия - ";
			cout << Person[i].surname << endl;
			cout << "День рождения - ";
			cout << Person[i].birth.day << endl;
			cout << "Месяц рождения - ";
			cout << Person[i].birth.month << endl;
			cout << "Год рождения - ";
			cout << Person[i].birth.year << endl;
			cout << "Пол - ";
			cout << Person[i].s << endl;
			cout << "Адрес - ";
			cout << Person[i].adress << endl;
		}
	};
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}

void search() {
	int yo;
	cout << "Введите год, по которому следует осуществить поиск - ";
	cin >> yo;
	for (int i = 0; i < codow; i++) {
		if (yo == Person[i].birth.year) {
			cout << "Имя - ";
			cout << Person[i].name << endl;
			cout << "Фамилия - ";
			cout << Person[i].surname << endl;
			cout << "День рождения - ";
			cout << Person[i].birth.day << endl;
			cout << "Месяц рождения - ";
			cout << Person[i].birth.month << endl;
			cout << "Год рождения - ";
			cout << Person[i].birth.year << endl;
			cout << "Пол - ";
			cout << Person[i].s << endl;
			cout << "Адрес - ";
			cout << Person[i].adress << endl;
		}
	}
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}