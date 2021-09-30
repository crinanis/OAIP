//Вариант 11
//Компоненты файла fileA –  целые числа, значения которых повторяются.  Получить файл fileB, образованный из fileA числами, которые встречаются в A ровно 2 раза.
#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "");
	int* a;
	int i, j;
	FILE* f;
	FILE* g;
	fopen_s(&f, "a.txt", "r");
	fopen_s(&g, "b.txt", "w");
	
	long fsize;
	fseek(f, 0L, SEEK_END);
	fsize = ftell(f);
	fseek(f, 0L, SEEK_SET);

	a = (int*)calloc(fsize, sizeof(int));
	if (a == NULL) exit(1);
	for (i = 0; i < fsize; i++) {
		fscanf_s(f, "%d ", &a[i]);
	}
	for (i = 0; i < fsize; i++)
	{
		int	t = 0;
		for (j = 0; j < fsize; j++) {
			if (a[i] == a[j] && i != j) {
				t = t + 1;
			}
		}
		if (t == 1) fprintf_s(g, "%d ", a[i]);
	}

	fclose(f);
	fclose(g);
}