//Вариант 11
// Создать текстовый файл F1 не менее, чем из 6 строк, и записать в него информацию.Скопировать в файл F2 только те строки из F1, которые заканчиваются символом «а».

#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	FILE* F1;
	FILE* F2;
	char str[255];

	fopen_s(&F1, "f1.txt", "w");

	for (int i = 0; i < 8; i++)
	{
		fflush(stdin);
		printf("Строка  %d:\n", i + 1);
		gets_s(str);
		int r = strlen(str);
		fputs(str, F1);
		fputs("\n", F1);
	}
	fclose(F1);

	fopen_s(&F1, "f1.txt", "r");
	fopen_s(&F2, "f2.txt", "w");

	while (fgets(str, 255, F1) != NULL)
	{
		if (str[strlen(str) - 2] == 'A' || str[strlen(str) - 2] == 'a')
		{
			fputs(str, F2);
		}
	}
	fclose(F1);
	fclose(F2);
}