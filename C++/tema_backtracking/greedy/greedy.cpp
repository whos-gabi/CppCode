#include <iostream>
#include <fstream>

using namespace std;

ifstream f("val.in");

/*
Intr-o sala de spectacole trebuie planificate n spectacole care au loc in aceiasi zi
pt fiecare spectacol se cunoaste ora de inceput si de sfarsit al acestuia 
Scrieti un program care sa planifice optim opuparea salii de spectacol.
 * /

/*
p1: se initializeaza submultimea  s, s=(multimea vida)
p2:cat timp S nu este solutie

*/

struct spec
{
    int inc, sf, ordine;
} a[100];

//var
int n, sol[100], j;

void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> a[i].inc >> a[i].sf;
        a[i].ordine = i;
    }
}

void ordonare()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i].sf > a[j].sf)
                swap(a[i], a[j]);
        }
    }
}

void greedy(int n, int j)
{
    sol[1] = 1;
    j = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i].inc<a[i].sf)
        sol[++j]=i;
    }
}

void afis(int j)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "spectacolul "<< a[sol[i]].ordine << " incepe la ora " << a[sol[i]].inc << " si se termina la ora " << a[sol[i]].sf << '\n';
    }
}

int main()
{
    citire();
    ordonare();
    greedy(n, j);
    afis(j);
    return 0;
}
