/*
Sa se afle nr de judete si localitati din fiecare oras
sa de afiseze judetul cu cele mai multe localitati
*/
#include <iostream>
#include <fstream>
// #include <iostream>
using namespace std;

ifstream fin("date.in");
// ofstream fout ("graf.out");
// var
/*
n - localitati

*/
// int n, m, i, j, k, x, y, z, nr_judete, nr_localitati, localitati[101][101], judet[101];
int n, x, y, viz[101], a[101][101], nr = 1;

/*
9 6

1 2
--
3 4
4 5
5 6
--
7 8
8 9
*/

void citire()
{
    fin >> n;
    while (fin >> x >> y)
    {
        a[x][y] = a[y][x] = 1;
    }
}

//afiseaza componente conexe din graf
void formare(int x, int nr)
{
    viz[x] = nr;
    cout << x << " ";
    for (int i = 1; i <= n; i++)
        if (a[x][i] && viz[i] == 0)
            formare(i, nr);
}


void afis()
{
    cout<<endl;
    for (int i = 1; i <= n; i++)
        if (viz[i] == 0)
        {
            cout << "Componenta conexa " << nr << " : ";
            formare(i, nr);
            nr++;
            cout << '\n';
        }
}


int main()
{
    citire();
    formare(1,nr);
    afis();
    return 0;
}