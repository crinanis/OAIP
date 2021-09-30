#include <iostream>
#include <string>
#define size 40
using namespace std;

void add();
void del();
void show();
void search();

struct Klass {
	unsigned num : 4;
	unsigned letter : 32;
} klass;

enum Subject {
	Mathematics = 0, Kyar, Oaip, Alotsvm
} subj;

struct Pupils {
	string surname;
	string name;
	Klass klass;
	int marks[4];
	float average;
} pupil[size], zero;

int decision;
int codow = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите:" << endl;
	cout << "Добавить запись - 1" << endl;
	cout << "Удалить запись - 2" << endl;
	cout << "Вывести запись - 3" << endl;
	cout << "Поиск информации - 4" << endl;
	cout << "Выход - 5" << endl;
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

void add()
{
	if (codow < size) {
		cout << "Фамилия - ";
		cin >> pupil[codow].surname;
		cout << "Имя - ";
		cin >> pupil[codow].name;
		cout << "Цифра класса - ";
		int NumOfClass;
		cin >> NumOfClass;
		pupil[codow].klass.num = NumOfClass;
		cout << "Буква класса - ";
		char LetOfClass;
		cin >> LetOfClass;
		pupil[codow].klass.letter = LetOfClass;
		cout << "Оценки - ";
		for (int j = 0; j < 4; j++)
		{
			cin >> pupil[codow].marks[j];
		}
		pupil[codow].average = (((float)pupil[codow].marks[Mathematics] + (float)pupil[codow].marks[Kyar] + (float)pupil[codow].marks[Oaip] + (float)pupil[codow].marks[Alotsvm]) / 4);

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
			pupil[de] = pupil[de + 1];
		codow = codow - 1;
	}
	if (purge == 101)
		for (int i = 0; i < size; i++)
		{
			pupil[i] = zero;
			codow = 0;
		}
	cout << "Что делать дальше?" << endl;
	cin >> decision;
	cout << endl;
}

void show()
{
	for (int i = 0; i < codow; i++)
	{
		cout << "Фамилия: " << pupil[i].surname << '\n';
		cout << "Имя: " << pupil[i].name << '\n';
		cout << "Класс: " << pupil[i].klass.num << (char)pupil[i].klass.letter << '\n';
		cout << "Оценки:\n";
		cout << "Математика: " << pupil[i].marks[Mathematics] << '\n';
		cout << "Физика: " << pupil[i].marks[Kyar] << '\n';
		cout << "ОАиП: " << pupil[i].marks[Oaip] << '\n';
		cout << "Английский: " << pupil[i].marks[Alotsvm] << '\n';
		cout << "Средний балл: " << pupil[i].average << '\n';
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
	cout << endl;
}

void search()
{
	string search_surname;
	cout << "Введите фамилию ученика, которого вы хотите найти - ";
	cin >> search_surname;
	for (int i = 0; i < size; i++)
	{
		if (search_surname == pupil[i].surname)
		{
			cout << "Ученик с фамилией " << search_surname << " имеет порядковый номер " << i + 1 << '\n';
		}
	}
	cout << "Что делать дальше?\n";
	cin >> decision;
	cout << endl;
}
