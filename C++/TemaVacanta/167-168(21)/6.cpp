#include <bits/stdc++.h>
//
using namespace std;
//fun cmmdc, cin s, m, toate perechile de nr care au suma s si care au cel mai mic multiplu comun m
int s, m;

void citire()
{
    cin >> s >> m;
}

int cmmmc(int x, int y, int a, int nr)
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return a * nr / x;
}

void prelucrare()
{
    int a = s, nr = 0, c = 0, j = a / 2, x, y;

    while (j != 0)
    {
        nr++;
        a = a - nr;
        c++;
        j--;
        x = a;
        y = nr;
        
        if (cmmmc(x,y,a,nr) == m)
        {
            cout << 1;
        }
    }
    // cout << c;
}

int main()
{
    citire();
    prelucrare();
    return 0;
}