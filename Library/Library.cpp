#include<string>
#include<windows.h>
#include <iostream>
#include"Library.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout <<"Сумма = " << Sum(4, 11) << endl;
    string st = "Hello word";
    int n = st.length();
    char * ar = new char  [n];
for (int i = 0; i < st.length(); i++)
    {
        ar[i] = st[i];
    }
for (int  i = 0; i < n; i++)
{
    cout << ar[i] << endl;
}

}
