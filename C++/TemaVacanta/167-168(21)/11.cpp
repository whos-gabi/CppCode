#include <bits/stdc++.h>
//
using namespace std;
//
int n, v[255][255];

void citire()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
}

void prelucrare(int a[255][255])
{
    int s = 0, k = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i + j == n + 1)
            {
                s = s + a[i][n + i];
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == j)
            {
                s = s + a[i][j];
            }
        }
    }

    cout << "Suma elementelor diagonalei principala este:" << s << endl;
    cout << "Suma elementelor diagonalei secundare este:" << s << endl;
    //suma elem de pe diagonala
    //TODO
}

int main()
{
    citire();
    prelucrare(v);
    return 0;
}