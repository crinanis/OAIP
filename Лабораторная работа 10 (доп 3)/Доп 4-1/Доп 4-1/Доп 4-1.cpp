#include <iostream>			
using namespace std;

//1.	Используя битовые операции проверить, кратно ли четырём число А.
int main (){
    setlocale(LC_CTYPE, "russian");
    int iA, iB, i, x = 0, F;
    cout << "Введите число для проверки " << endl;
    cin >> iA;
    for (i = 0; i < 2; i++)
    {
        iB = iA & (1 << i);
        if (iB == 0) x++;
    }
    if (x == 2) F = 1;
    else F = 0;
    cout << F;
    
}
