//Вариант 6
//Скопировать из файла FILE1 в файл FILE2 строки, начиная с N до K. Подсчитать количество согласных букв в файле FILE2.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, k, num = 0, counter = 0;
	cout << "Введите, с какой строки начать копировать:\n";
	cin >> n;
	cout << "Введите, до какой строки копировать:\n";
	cin >> k;
	string str;
	ifstream a("a.txt");
	ofstream b("b.txt");
	k--;
	n--;
	while (getline(a, str))
	{
		if (num >= n && num <= k)
		{
			b << str << '\n';
			int size = str.size();
			for (int j = 0; j < size; j++)
			{
				if (str[j] == 'q' || str[j] == 'Q' || str[j] == 'w' || str[j] == 'W' || str[j] == 'r' || str[j] == 'R' || str[j] == 't' || str[j] == 'T' ||
					str[j] == 'p' || str[j] == 'P' || str[j] == 's' || str[j] == 'S' || str[j] == 'd' || str[j] == 'D' || str[j] == 'f' || str[j] == 'F' ||
					str[j] == 'g' || str[j] == 'G' || str[j] == 'h' || str[j] == 'H' || str[j] == 'j' || str[j] == 'J' || str[j] == 'k' || str[j] == 'K' ||
					str[j] == 'l' || str[j] == 'L' || str[j] == 'z' || str[j] == 'Z' || str[j] == 'x' || str[j] == 'X' || str[j] == 'c' || str[j] == 'C' ||
					str[j] == 'v' || str[j] == 'V' || str[j] == 'b' || str[j] == 'B' || str[j] == 'n' || str[j] == 'N' || str[j] == 'm' || str[j] == 'M') counter++;
			}
		}
		num++;
	}
	cout << "В нашем файле находится "<< counter << " согласных букв.\n";
}
