#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string in(string* pIn);
string out(string* pOut);

int main()
{
	setlocale(LC_ALL, "ru");
	string sOut, sIn;
	string* pOut = &sOut, * pIn = &sIn;
	cout << "Введите группы цифр, разделенные пробелом:\n";
	getline(cin, sOut);
	out(pOut);
	in(pIn);
}

string out(string* pOut)
{
	ofstream one("one.txt");
	one << *pOut;
	one.close();
	return *pOut;
}

string in(string* pIn)
{
	string sIn, min = "000000000000000";
	ifstream two("one.txt");
	while (two)
	{
		two >> sIn;
		if (sIn.length() < min.length())
			min = sIn;
	}
	cout << "Самая короткая группа: " << min << '\n';
	two.close();
	return min;
}














//void check(char* str)
//{
//	int mas[20];
//	int now = 0, counter = 0, start = 0, j = 0, count = 0;
//
//	for (int i = 0; i < 50; i++)
//	{
//		if (str[i] == ' ') {
//			count += 1;
//			j += 1;
//			now = i;
//			for (now; now - 1 > start; now--) {
//				counter++;
//			}
//			mas[j - 1] = counter;
//			counter = 0;
//			start = i;
//		}
//	}
//	int min = mas[0];
//	for (int p = 0; p < count; p++) {
//		if (min > mas[p]) {
//			min = mas[p];
//		}
//	}
//	int number;
//	for (int p = 0; p < count; p++) {
//		if (mas[p] = min) number = p;
//	}
//	int count1 = 0, z;
//	for (z = 0, count1; z < 50, count1 <= number; z++) {
//		if (str[z] == ' ') count1++;
//	}
//	ofstream out("one.txt");
//	for (int i = 0; i < min; i++) {
//		cout << str[z - 2] << "\n";
//		out << str[z - 2] << endl;
//		z--;
//	}
//	out.close();
//}

//int main()
//{
//	setlocale(LC_ALL, "RU");
//	char str[40];
//	ofstream out("one.txt");
//	ifstream in("one.txt");
//	cout << "Введите строку" << endl;
//	gets_s(str);
//	out << str << endl;
//	out.close();
//	strcpy_s(str, " ");
//	in.read(str, sizeof(str));
//	in.close();
//	check(str);
//}