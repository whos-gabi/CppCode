#include <iostream>
#include <fstream>
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
//
using namespace std;
//

int a[101][101], viz[101], n, m, i, j;

ifstream f("in.in");
// ofstream g("out.out");

struct muchie
{
    int x,y,pr;

} mu[101];

void citire()
{
     f >> n >> m;
    for (int j = 1; j <= m; j++)
    {
        f >> mu[j].x >> mu[j].y >> mu[j].pr;
        // a[x][j] = a[y][j] = 1;
    }
}

int cost(){
    int total=0;
    for (int i = 1; i <=m; i++)
    {
        total+=mu[i].pr;

    }
    return total;
}

int main()
{
    citire();
    cout<<cost();
    return 0;
}