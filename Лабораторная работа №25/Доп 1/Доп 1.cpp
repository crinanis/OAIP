#include "List.h"
#define kol 50
using namespace std;

struct hotel {
	char patronym[kol];
	char surname[kol];
	char name[kol];
	char placement[kol];
	char date[kol];
	hotel* next;
};
hotel person[10];

void deleteLinkedList(Element** node) {
	Element* tmpNode;
	while (*node) {
		tmpNode = *node;
		*node = tmpNode->Next;
		delete tmpNode;
	}
}

void print(void* b)  //Функция используется при выводе 
{
	hotel* a = (hotel*)b;
	cout << a->name << " " << a->placement << " " << a->date << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	person[0] = { "Budanowa", "Ksenya", "Andreevna", "Lux", "10.03.2021-25.03.2021" };
	person[1] = { "Hryinuk", "Dmitruy", "Anatol'evich", "Single", "01.03.2021-09.03.2021" };
	person[2] = { "Beloded", "Nikolay", "Ivanovich", "Double", "03.03.2021-21.03.2021" };
	person[3] = { "Misevich", "Aleksey", "Vasil'evich", "Single", "05.05.2021-11.03.2021"};
	bool rc;
	Object L1 = Create();  // создание списка с именем L1

	cout << "Выберите опцию:" << endl;
	cout << "1 - Вставка в начало" << endl;
	cout << "2 - Найти заданный элемент" << endl;
	cout << "3 - Вывод" << endl;
	cout << "4 - Удалить по ссылке" << endl;
	cout << "5 - Удалить по значению" << endl;
	cout << "6 - Очистить список" << endl;
	cout << "7 - Подсчет элементов списка" << endl;
	cout << "0 - Выход" << endl;

	int choice = 1;
	for (; choice != 0;)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			for (int i = 0; i < 4; i++)
			{
				L1.Insert(&person[i]);
			}
			cout << "Элементы добавлены в список" << endl;
			break;
		}
		case 2: {
			cout << "Какой элемент найти? " << endl;
			int nomer;
			cin >> nomer;
			Element* e = L1.Search(&person[nomer]);
			hotel* aa = (hotel*)e->Data;
			cout << "Найден элемент: " << aa->name << endl;
			break;
		}
		case 3: {
			cout << "Список:" << endl;
			L1.PrintList(print);
			break;
		}
		case 4: {
			if (L1.Delete(&person[0])) cout << "Удален элемент" << endl;
			else cout << "Что-то пошло не так..." << endl;
			break;
		}
		case 5: {
			int i;
			cout << "Введите номер элемента для удаления" << endl; cin >> i;
			if (L1.Delete(&person[i])) cout << "Удален элемент" << endl;
			else cout << "Что-то пошло не так..." << endl;
			break;
		}
		case 6: {
			int ln = L1.CountList(print);
			for (int i = 0; i < ln; i++)
			{
				L1.Delete(&person[i]);
			}
			cout << "Список очищен!" << endl;
			break;
		}
		case 7: {
			if (L1.CountList(print)) cout << "Количество элементов в списке:" << L1.CountList(print) << endl;
			else cout << "Что-то пошло не так..." << endl;
			break;
		}
		case 0: break;
		}
	}

	return 0;
}