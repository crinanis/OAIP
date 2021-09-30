#include <iostream>
#include <fstream>
#include <string>

#define len 30 
#define size 30  
int choice;
using namespace std;
struct trains
{
	char destination[len];
	int number;
	int departure_hour;
	int departure_minute;
};

struct trains TRAIN[size];
int curr_size = 0;

void add();
void show();
void show_info();
void record();
void reading();


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите:" << endl;
	cout << "Добавить запись - 1" << endl;
	cout << "Вывести запись - 2" << endl;
	cout << "Вывести информацию о поездах, отправляющихся после назначенного времени - 3" << endl;
	cout << "Записать информацию в файл - 4" << endl;
	cout << "Читать данные из файла - 5" << endl;
	cout << "Выйти - 6" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1: add(); break;
		case 2: show();	break;
		case 3: show_info(); break;
		case 4: record(); break;
		case 5: reading(); break;
		}
	} while (choice != 6);
}

void add()
{
	if (curr_size < size)
	{
		cout << endl << "Пункт назначения:  " << endl;
		cin >> TRAIN[curr_size].destination;
		cout << "Номер поезда: " << endl;
		cin >> TRAIN[curr_size].number;
		cout << "Время отправления:  " << endl;
		cin >> TRAIN[curr_size].departure_hour;
		cin >> TRAIN[curr_size].departure_minute;
		curr_size++;
	}
	else {
		cout << "Введено максимальное кол-во строк";
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}

void show()
{
	trains t;
	for (int i = 0; i < curr_size; i++)
	{
		for (int j = i + 1; j < curr_size; j++)
		{
			if (strcmp(TRAIN[i].destination, TRAIN[j].destination) > 0)
			{
				t = TRAIN[i];
				TRAIN[i] = TRAIN[j];
				TRAIN[j] = t;
			}
		}
		cout << endl << "Пункт назначения:  " << endl;
		cout << TRAIN[i].destination << endl;
		cout << "Номер поезда: ";
		cout << TRAIN[i].number << endl;
		cout << "Время отправления: ";
		cout << TRAIN[i].departure_hour << ":" << TRAIN[i].departure_minute << endl;
		cout << endl;
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}

void show_info()
{
	int h;
	int m;
	cout << "Введите время отправления - " << endl;
	cin >> h;
	cin >> m;
	int k = 0;
	for (int i = 0; i < curr_size; i++)
	{

		if ((TRAIN[i].departure_hour > h) || (TRAIN[i].departure_hour == h && TRAIN[i].departure_minute > m))
		{
			cout << endl;
			cout << "Этот поезд отправится после введённого времени: " << endl;
			cout << endl << "Пункт назначения:  " << endl;
			cout << TRAIN[i].destination << endl;
			cout << "Номер поезда: ";
			cout << TRAIN[i].number << endl;
			cout << "Время отправления: ";
			cout << TRAIN[i].departure_hour << ":" << TRAIN[i].departure_minute << endl;
			cout << endl;
			k++;
		}
	}
	if (k == 0) {
		cout << "Таких поездов нет" << endl;
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}

void record() {
	ofstream f("text.txt");
	for (int i = 0; i < curr_size; i++) {
		f << "Пункт назначения:  " << TRAIN[i].destination << endl << "Номер поезда: " << TRAIN[i].number << endl << "Время отправления:  " << TRAIN[i].departure_hour << ":" << TRAIN[i].departure_minute << "\n\n";
	}
	f.close();
	cout << "Что дальше?\n";
	cin >> choice;
}

void reading() {
	string line;
	ifstream f("text.txt");
	while (getline(f, line))
	{
		cout << line << endl;
	}
	f.close();
	cout << "Что дальше?\n";
	cin >> choice;
}

