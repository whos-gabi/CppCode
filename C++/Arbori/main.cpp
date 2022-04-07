#include <iostream>
#include <fstream>

using namespace std;

ifstream f("kruskal.in");

int n, m, l[20];

struct muchie
{
    int x, y, c;
};

muchie u[20];
//----------------------------------------------------------------

void citire()
{
    int x, y, c, i = 0;
    f >> n;
    while (f >> x >> y >> c)
    {
        i++;
        u[i].x = x;
        u[i].y = y;
        u[i].c = c;
    }
    m = i;
    f.close();
}

void init()
{
    for (int i = 1; i <= n; i++)
    {
        l[i] = i;
    }
}

void sortare()
{
    int i, j;
    muchie aux;
    for (i = 1; i <= m; i++)
    {
        for (j = i+1; j <= m; j++)
        {
            if (u[i].c > u[j].c)
            {
                aux = u[i];
                u[i] = u[j];
                u[j] = aux;
            }
        }
    }
}
void afis(){
    for (int i = 1; i<=m; i++){
        cout<<u[i].x<<" "<<u[i].y<<" "<<u[i].c<<endl;
    }
}

int main()
{
    int i = 1, ct = 0, x, y, j, k ;
    citire();
    sortare();
    init();
    // afis();
    cout << "Arborele partial are muchiile:" << '\n';
    k=0;
    while (k < n - 1)
    {
        if (l[u[i].x] != l[u[i].y])
        {
            k++;
            ct += u[i].c;
            cout << "muchia " << u[i].x << " & " << u[i].y << " cu costul " << u[i].c << '\n';
            x = l[u[i].x];
            y = l[u[i].y];
            for (j = 1; j <= n; j++)
                if (l[j] == y)
                    l[j] = x;
        }
        i++;
    }
    cout <<'\n'<< "Costul total este " << ct << '\n';
    return 0;
}