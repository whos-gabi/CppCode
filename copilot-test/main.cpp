#include <bits/stdc++.h>
using namespace std;

ifstream fin("graf.in");
ofstream fout("graf.out");
int n, a[101][101], tr[101][101].b[101][101], viz[101], nr;
void citire()
{
    fin >> n;
    int x, y;
    while (fin >> x >> y)
        a[x][y] = tr[y][x] = 1;
}

void rw()
{
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i != j && a[i][j] == 0)
                    a[i][j] = a[i][k] * a[k][j];
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i != j && tr[i][j] == 0)
                    tr[i][j] = tr[i][k] * tr[k][j];
}

void inters()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            b[i][j] = a[i][j] * tr[i][j];
}

void comp_tare_conexe()
{
    for (int i = 1; i <= n; i++)
    {
        if (viz[i] == 0)
        {
            nr++;
            viz[i] = 1;
            fout << "componenta conexa numarul " << nr << " : " << i << " ";
            for (int j = 1; j <= n; j++)
                if (b[i][j] == 1 && i != j)
                    fout << j << " ";
        }
        fout << '\n';
    }
    fout << "numarul de componente tare conexe = " << nr << '\n';
}

int main()
{
    citire();
    rw();
    inters();
    comp_tare_conexe();
    return 0;
}
