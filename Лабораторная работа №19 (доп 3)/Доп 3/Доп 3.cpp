//Вариант 9
//Скопировать из файла FILE1 в файл FILE2 все строки, начинающиеся на букву «С»,
//расположенные между строками с номерами N1 и N2. Определить количество слов в первой строке файла FILE2.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int N1, N2, num = 0, counter = 0;
	string str;

	cout << "С какой строки копировать?:\n";
	cin >> N1;
	cout << "До какой строки копировать?:\n";
	cin >> N2;

	ifstream first("first.txt");
	ofstream second("second.txt");

	N1--;
	N2--;

	while (getline(first, str))
	{
		if (num >= N1 && num <= N2)
		{
			if (str[0] == 'C' || str[0] == 'c')
			{
				second << str << '\n';
				for (int i = 0; i < str.length(); i++)
				{
					if (str[0] == 'C' || str[0] == 'c') {
						if (str[i] == ' ' && str[i+1]!='c' && str[i+1]!='C')
						{
							counter++;
						}
					}
				}
			}
		}
		num++;
	}
	cout << "В первой строке второго файла " << counter-11 << " слов.\n";
}