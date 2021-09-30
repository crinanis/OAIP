#include <iostream>;
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "russian");
	int n, u = 0;
	int arr1[5];
	float proc[5] = {0.1, 0.08, 0.06, 0.04, 0.02};
	float p = 0.02, pMax;
	float sumSProc = 0;
	float sum = 0, itog;
	
    cout << "Введите кол-во лет, за которое закупалось оборудование ";
	cin >> n;
	pMax = p * n;
	cout << "Максимальный процент составил: " << pMax << "\n";

	cout << "Введите, на какую сумму ежегодно закупалось оборудование ";
	for (int i = 0; i < n; i++) {
		scanf_s("%i", &arr1[i]);
	}

	cout << "В течение " << n << " лет было закуплено: \n";
	for (int t = 0; t < n; t++)
		printf("%d ", arr1[t]);

	for (int y = 0; y < n; y++) {
		sum = sum + arr1[y];
	}
    cout << "Итоговая сумма составила " << sum << " рублей" << endl;


	cout << " " << endl;

	for (int d = 0; d < n; d++) {
		sumSProc = sumSProc + (arr1[d] * proc[d]);
	}

	itog = sum - sumSProc;
	
	cout << " Цена оборудования после уценки составила " << itog << " рублей";

}


