#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a = 2e-3, b = 8.5, n = 2, e = 2.71828, y, z, i;
	for (int k = 1; k <= 3; k++)
	{
		printf("Введите i ");
		scanf_s("%f", &i);
		y = sqrt(i * b - pow(b, 2) * a);
		z = y * tan(n / 4) - pow(e, (1 + b));
		printf("y = %5.2f\t", y);
		printf("z = %5.2f\n", z);
	}
}
