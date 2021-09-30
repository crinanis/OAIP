#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    ifstream in("1.txt");
    ofstream out("2.txt");
    int count = 0;

    while (in >> str)
    {
        if (str[0] == 'A' || str[0] == 'a') {
            out << str << endl;
            count++;
        }
    }
    in.close();
    out.close();

    cout << "Count = " << count << endl;
}