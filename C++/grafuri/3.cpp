#include <iostream>
#include <fstream>
//
using namespace std;
//
int a[101][101], viz[101], n, m, x, y,pl;

ifstream f("diru.in");
ifstream out("in_mi.in");

void citire()
{
    f >> n >> m;
    for (int j = 1; j <= m; j++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
}

void parcurgere_adancime(int i)
{
    cout << i <<" ";
    for (int j = 1; j <= n; j++)
    {
        if (a[i][j] == 1 && viz[j] == 0)
        {
            viz[j] = 1;
            parcurgere_adancime(i);
        }
    }
}

int main()
{
    citire();
    cout<<"Citire varf pornire: ";
    cin>>pl;
    viz[pl] = 1;
    parcurgere_adancime(pl);
    return 0;
}