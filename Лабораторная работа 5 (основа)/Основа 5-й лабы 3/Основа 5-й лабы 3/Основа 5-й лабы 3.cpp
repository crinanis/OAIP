#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a = 2e-3, b = 2, n, e = 2.71828, y, z, i=5;

		for (int k = 1; k <= 4; k++)
		{
			printf("Введите n ");
			scanf_s("%f", &n);
			y = sqrt(i * b - pow(b, 2) * a);
			z = y * tan(n / 4) - pow(e, (1 + b));
			while (b < 3.5) {
				b = b + 0.5;
			}
			printf("y = %5.2f\t", y);
			printf("z = %5.2f\n", z);		
		}
}