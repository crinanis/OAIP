//Вариант 13
//Компоненты файла f – целые числа. Получить файл g, образованный из f исключением повторных вхождений одного и того же числа.
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
		int	t = 1;
		for (j = 0; j < fsize; j++) {
			if (a[i] == a[j] && i != j) {
				t = 0;
				break;
			}

		}
		if (t == 1) fprintf_s(g, "%d ", a[i]);
	}

	fclose(f);
	fclose(g);
}
