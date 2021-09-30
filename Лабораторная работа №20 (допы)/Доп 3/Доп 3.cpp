#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#define len 10
using namespace std;

struct Sanatorium {
	string name;
	string placement;
	string treatment;
	int tickets;
} sanat[len];

void reading();
void info();

int main()
{
	setlocale(LC_CTYPE, "rus");
	reading();
	info();
}


bool comp_name(Sanatorium left, Sanatorium right) {
	return left.name < right.name;
}

bool comp_treatment(Sanatorium left, Sanatorium right) {
	return left.treatment < right.treatment;
}

void info() {
	sort(sanat, sanat + len, comp_name);
	sort(sanat, sanat + len, comp_treatment);

	for (int i = 0; i < len; ++i) {
		cout << "Название : " << sanat[i].name << endl;
		cout << "Город: " << sanat[i].placement<< endl;
		cout << "Профиль лечения: " << sanat[i].treatment << endl;
		cout << "Путевок: " << sanat[i].tickets << endl;
	}
}
void reading()
{
	ifstream f("text.txt");

	if (!f.is_open()) {
		cout << "Не удаётся открыть файл для чтения " << endl;
		exit(EXIT_FAILURE);
	}

	vector<string> info;
	string line, word;
	stringstream x;
	for (int i = 0; i < len; ++i) {
		f >> sanat[i].tickets;
		getline(f, line);
		x << line;
		while (x >> word)
		{
			info.push_back(word);
		}
		for (int k = 0; k < info.size(); k++)
		{
			if (k == 0) {
				sanat[i].name = info[k];
			}
			if (k == 1) {
				sanat[i].placement = info[k];
			}
			if (k == 2) {
				sanat[i].treatment = info[k];
			}
		}
		x.clear();
		line.clear();
		word.clear();
		info.clear();
	}

}