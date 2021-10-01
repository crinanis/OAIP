#include "myQueue.h"
void create (Number** begin, Number** end, int p) {
	Number* t = new Number;
	t->next = NULL;
	if (*begin == NULL)
		*begin = *end = t;
	else {
		t->info = p;
		(*end)->next = t;
		*end = t;
	}
}

void view (Number* begin) {
	int l;
	l = 0;
	int g;
	Number* t = begin;
	if (t == NULL) {
		cout << "Number is empty\n";
		return;
	}
	else {

		while (t != NULL) {
			g = t->info;
			if (g != 0) {
				cout << g << endl;
				l++;

			}t = t->next;
		}
		cout << "Очередь состоит из " << l << "элементов" << endl;
	}
}

void del (Number* begin, int p) {
	int o;
	Number* t = begin;
	if (t == NULL)
	{
		cout << "Number is empty\n";
		return;
	}
	else
		while (t != NULL)
		{
			o = t->info;
			if (o == p) {
				t->info = NULL;
				return;
			}
			else
				t = t->next;
		}
}

Number* counting(Number* begin) {
	Number* t = begin;
	int min1, minimum;
	if (t == NULL) {
		cout << "Number is empty\n"; return 0;
	}
	else {
		min1 = t->info;


		while (t != NULL) {
			int k;
			k = t->info;
			if (k <= min1 && k != 0) {
				min1 = t->info;
				minimum = t->info;
			}
			t = t->next;
		}
	}
	//
	Number* o = begin;
	int min2, maximum;
	if (o == NULL) {
		cout << "Number is empty\n"; return 0;
	}
	else {
		min2 = o->info;
		while (o != NULL) {
			int k;
			k = o->info;
			if (k >= min2 && k != 0) {
				min2 = o->info;
				maximum = o->info;
			}
			o = o->next;
		}
	}
	cout << "Минимальное число: " << minimum << endl;
	cout << "Максимальное число: " << maximum << endl;
	Number* x = begin;
	int sch = 0;
	if (x == NULL) {
		cout << "Number is empty\n"; return 0;
	}
	else {

		while (x != NULL) {
			int k;
			k = x->info;
			if (k > minimum && k < maximum) {
				sch++;
			}
			x = x->next;
		}
	}
	
	cout << sch - 2 << endl;
}
