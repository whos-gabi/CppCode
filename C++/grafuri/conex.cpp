#include <iostream>
#include <fstream>
//
using namespace std;
//
int a[101][101], viz[101], maxi, cnt, n, i, j, nr;
int k = 0;

ifstream f("conex.in");
ofstream g("conex.out");

void citire()
{
    f >> n;
    while (f >> i >> j)
        a[i][j] = a[j][i] = 1;
}

void dfs(int x, int nr)
{
    viz[x] = k;
    for (int i = 1; i <= n; i++)
    {
        if (viz[i] == 0 && a[x][i] == 1)
            dfs(i, k);
    }
}


int main()
{

    citire();

    for (int j = 1; j <= n; j++)
    {
        if (viz[j] == 0)
            k++, dfs(j, k);
    }

    g << k << '\n';

    for (int l = 1; l <= k; l++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (viz[i] == l)
                g << i << " ";
        }
        g << '\n';
    }

    return 0;
}