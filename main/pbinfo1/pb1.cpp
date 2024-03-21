#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

/*
pentru c=1, sa se afiseze mesajul criptat
pentru c=2, sa se afiseze mesajul decriptat
*/

ifstream fin("scytale.in");
ofstream fout("scytale.out");

int m, n, c;
char a[101];
char k[101][101];

void citire()
{
    fin >> c;
    fin >> a;
    fin >> n;
    m = strlen(a);
}

void encrypt()
{
    int char_nr = 0, third = 0;
    // m linii si n coloane
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i+j+1 % 3 == 0)
            {
                k[i][j] = a[char_nr];
                char_nr++;
                third++;
            }
            else
            {
                k[i][j] = '.';
            }
            cout<<k[i][j]<<" ";
        }
    }
}
void decrypt()
{
    cout << 'ssss';
}

void writeOut()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i <= m; i++)
        {
            fout << k[i][j] << ' ';
        }
        fout << endl;
    }
}

int main()
{

    citire();

    if (c == 1)
    {
        encrypt();
    }
    else if (c == 2)
    {
        decrypt();
    }
    writeOut();
    // test
    cout << c << "\n";
    cout << a << "\n";
    cout << n << "\n";
    cout << m << "\n";
    return 0;
}