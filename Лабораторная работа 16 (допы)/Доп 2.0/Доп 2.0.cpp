// Вариант 7. Найти в матрице первый столбец, все элементы которого отрицательны, и среднее арифметическое этих элементов.
//Вычесть полученное значение из всех элементов матрицы.
#include <iostream> 
#include <locale> 

using namespace std; 

void Matrix(); 

int main()
{
	setlocale(LC_CTYPE, "Russian");
	Matrix();
}


void Matrix()
{
	short X = 0, H = 0;
	cout << "Введите количество столбцов матрицы: " << endl;
	cin >> X;
	cout << "Введите количество строк матрицы: ";
	cin >> H;
	double* Matrix = new double[X * H];
	srand((unsigned)time(NULL));
	for (short i = 0; i < X; i++)
	{
		cout << endl;
		for (short j = 0; j < H; j++)
		{
			*(Matrix + i * H + j) = (rand() % 10) - 5;
			cout << *(Matrix + i * H + j);
			cout.width(5);
		}
		cout << endl;
	}
	cout << endl;

	short Temporary = 0;
	for (short i = 0; i < X; i++)
	{
		short Counter = 0;
		for (short j = 0; j < H; j++)
		{

			if (*(Matrix + j * H + i) < 0)
			{
				Counter++;
			}
			else
			{
				Counter = 0;
			}
		}
		if (Counter == X)
		{
			Temporary = i;
			cout << "Столбец состоящий из отрицательных элементов:" << Temporary << endl;
			i = X;
		}
	}
	double Average = 0;
	for (short i = 0; i < X; i++)
	{
		Average += *(Matrix + Temporary * H + i);
	}
	Average /= X;
	cout << "Среднее арифметичсекое: " << Average << endl;
	for (short i = 0; i < X; i++)
	{
		cout << endl;
		for (short j = 0; j < H; j++)
		{
			*(Matrix + i * H + j) -= Average;
			cout << *(Matrix + i * H + j) << "  ";
		}
		cout << endl;
	}
	cout << endl;
	delete[] Matrix;
}