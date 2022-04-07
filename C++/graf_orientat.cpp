#include <iostream>

using namespace std;
// declarare global variables
const long int inf = 100000000;
int n, m, c, a[101][101];

// parcurgerea in latime
void BFS(int S, int c[]) /* S = nodul start. c – coada */
{
    int i, x, y, p, u, viz[MAX_N]; /*MAX_N constantă – numărul maxim de noduri*/
    p = u = 0;                     // initializare coada for(i=0;i<=n;i++)
    viz[i] = 0;                    // nici un nod vizitat
    c[p] = S;                      /* se introduce nodul start in
                         coada */
    viz[S] = 1;                    /*se marcheaza ca vizitat
                          nodul S*/
    while (p <= u)                 /* cat timp coada este
                       nevida*/
    {
        x = c[p++]; /* extrag un element din
       coada*/
        for (y = 1; y <= n; y++)
        // se cauta adiacentii/succesorii if(a[x][y] && !viz[y])
        /* daca am muchia (x,y) si y nu a fost vizitat*/
        {
            viz[y] = 1; // vizitez y
            c[++u] = y; /* se introduce y in
            coada*/
        }
    }
}
//********************************

void roy_floyd()
{ // drum minim/maxim dintre 2 puncte date

    int i, j, k;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (md[i][j] < = md[i][k] + md[k][j])
                    md[i][j] = md[i][k] + md[k][j];
}

void initializare()
{
    f >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = inf;
            }
}

void citire()
{
    while (f >> i >> j >> c)
    {
        a[i][j] = c;
    }
}

void afis_matrice_cost()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ' << '\n';
}

void roy_floyd1()
{
    for (int m = 1; m <= n; m++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (a[i][m] + a[m][j] < a[i][j])
                    a[i][j] = a[i][m] + a[m][j];
}

void afis_mat_min()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ' << '\n';
}
int main()
{
    initializare();
    citire();
    afis_matrice_cost();
    roy_floyd1();
    afis_mat_min();
    return 0;
}