#include <iostream>
#include <fstream>
//
using namespace std;
//

/*

se citeste din fisierul tes.in
n -nr de varf
m- nr de muchii
pt fiecare muchie se cunoaste costul(struct)
7
1 2 10 
costul = 10

sa se calculeze costul grafului

*/
int a[101][101], viz[101], maxi, cnt, n, i, j, var, nr;

ifstream f("conex.in");
ofstream g("conex.out");

void citire()
{
    f >> n;
    while (f >> i >> j)
        a[i][j] = a[j][i] = 1;
}

void dfs(int x, int &nr)
{
    viz[x] = var;
    for (int j = 1; j <= n; ++j)
    {
        if (a[i][j] == 1 && viz[j] == 0)
        {
            nr++;
            dfs(j, nr);
        }
    }
}

int main()
{
    citire();
    for (int i = 1; i <= n; i++)
    {
        if (viz[i] == 0)
        {
            nr = 1;
            var++;
            dfs(i, nr);
            if (nr > maxi)
            {
                maxi = nr;
                cnt = var;
            }
        }
    }
    g << cnt << " " << maxi << '\n';
    return 0;
}