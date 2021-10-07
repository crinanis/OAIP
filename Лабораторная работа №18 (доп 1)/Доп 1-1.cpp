//Вариант 3
//Даны три файла целых чисел одинакового размера с именами NameA, NameB и NameC.
//Создать новый файл с именем NameD, в котором чередовались бы элементы исходных файлов с одним и тем же номером : A0, B0, C0, A1, B1, C1, A2, B2, C2, ...
#include <iostream>

int main()
{
    int i,a,b,c;
    int A[10], B[10], C[10];
    FILE* f1;
    FILE* f2;
    FILE* f3;
    FILE* fout;
    fopen_s(&f1, "a.txt", "rt");
    fopen_s(&f2, "b.txt", "rt");
    fopen_s(&f3, "c.txt", "rt");
    fopen_s(&fout, "d.txt", "wt");

    while (!feof(f1)) {
        for (i = 0; i < 10; i++) {
            fscanf_s(f1, "%d", &a);
            A[i] = a;
        }
        for (i = 0; i < 10; i++) {
            fscanf_s(f2, "%d", &b);
            B[i] = b;
        }
        for (i = 0; i < 10; i++) {
            fscanf_s(f3, "%d", &c);
            C[i] = c;
        }
        for (i = 0; i < 10; i++) {
            fprintf(fout, "%d\n", A[i]);
            fprintf(fout, "%d\n", B[i]);
            fprintf(fout, "%d\n", C[i]);
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(fout);
    return 0;
}
