// ��������� ���-������� �� ���� ������������� ���������� �����, ����� �� ����������� � ������. ������� ����������� ������� ���� �� �����.
//����������� ����� ���������� �����.
//��������� ��������� ��� ��������� ������������ ������� � �������� ���������� ���������. ������� ��� �����, ������������ �� ��������� �����, �������� �������.
#include "Header.h"
#include "Lists.h"
#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <time.h>
#include <fstream>

using namespace std;

const char* NML[15] = { "�������","��������","����",\
"�����","����","�������", "����������������",\
"����","�����","�����","�����","�������",\
"�������","�������" };

struct AAA
{
	int key;
	char mas[50];
	AAA(int k, char* z)
	{
		key = k;
		strcpy_s(mas, 50, z);
	}
	AAA()
	{
		key = 0;
		strcpy_s(mas, 50, "\0");
	}
};
//-------------------------------
int hf(void* d)                                                                         //������� �������� ��������� ��� ��������������� �������� ������
{
	AAA* f = (AAA*)d;
	return f->key;
}
//-------------------------------
void AAA_print(listx::Element* e)
{
	std::cout << ((AAA*)e->data)->key << '-' << ((AAA*)e->data)->mas << " / ";
}
//-------------------------------
void foutF(ofstream& f, char* name);

int _tmain(int argc, _TCHAR* argv[])
{
	ofstream input;
	ifstream output;
	setlocale(LC_ALL, "rus");                                                            //������������ ���������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	int current_size = 0;                                                                //����������, ������������ ������ �������                                                    
	cout << "������� ������ ���-�������: ";                                       //��������� � ����� ������� �������
	cin >> current_size;                                                                 //���� ������������� ������� �������
	hashTC::Object H = hashTC::create(current_size, hf);
	int choice;
	int k;
	for (;;)																			//����
	{
		cout << "1 - ����� ���-�������" << endl;
		cout << "2 - ���������� ��������" << endl;
		cout << "3 - �������� ��������" << endl;
		cout << "4 - ����� ��������" << endl;
		cout << "5 - ���������� ���-������� �� �����" << endl;
		cout << "6 - ���������� ����� �������" << endl;
		cout << "0 - �����" << endl;
		cout << "�������� �����" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:  exit(0);
		case 2: {	  AAA* a = new AAA;                                            //�������� ������ �������� ������. ������ - ������� �������
			char* str = new char[100];                                              //�������� ����� ������ ��� ������, ���������� � ���� �������� ������
			cout << "������� �����: ";
			cin >> k;                                                              //���� �����, ����������� � ���� �������� ������
			a->key = k;                                                            //������������ ���� "����" ������ �������� ����
			cout << "������� �����: ";
			cin.ignore();
			cin.getline(str, 100);
			strcpy_s(a->mas, 50, str);//������������ ���� "������" ������ �������� ������
			H.insert(a);                                                           //������� �������� � �����-�������
		}
			  break;
		case 1: H.Scan();
			break;
		case 3: {	  AAA* b = new AAA;
			char letter[1];
			cout << "������� �����:";
			cin.ignore();
			cin.getline(letter, 2);
			strcpy_s(b->mas, 2, letter);
			H.deleteByData(b);
		}
			  break;
		case 4: {AAA* c = new AAA;
			char only[50];
			cout << "������� �����: ";
			cin.ignore();
			cin.getline(only, 50);
			strcpy_s(c->mas, 50, only);
			H.Scan1(c);
		}
			  break;
		case 5:
		{
			char* str = new char[100];
			char words[14][50];
			char buf[25];
			cout << "������� ��� ����� ��� ������: ";
			cin.ignore();
			cin.getline(str, 100);
			output.open(str);
			if (!output.is_open())
				cout << "���� �� ����� ���� ������!\n";
			else
			{
				int i = 0;
				output.getline(buf, 25);
				do
				{
					strcpy_s(*(words + i), 50, buf);
					i++;
				} while (output.getline(buf, 50));
				for (int i = 0; i < H.sizeO - 1; i++)
				{
					AAA* a = new AAA;
					k = 0 + rand() % H.sizeO;
					a->key = k;
					strcpy_s(a->mas, 50, *(words + (0 + rand() % 14)));
					H.insert(a);
				}
				output.close();
			}
		}
		break;
		case 6:
		{
			char* str = new char[100];
			cout << "������� ��� ����� ��� ������: ";
			cin.ignore();
			cin.getline(str, 100);
			foutF(input, str);
		}
		break;
		}
	}
	return 0;
}

void foutF(ofstream& f, char* name)
{
	f.open(name);
	for (int i = 0; i < 14; i++)
	{
		f << NML[i] << endl;
	}
	f.close();
}