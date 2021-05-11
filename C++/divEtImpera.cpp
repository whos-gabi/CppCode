/**
Metoda DIVIDE et IMPERA

-Se poate folosi pentru problemele
care pot fi descompuse in subprobleme
similare cu problema initiala.

- Metoda DIVIDE et IMPERA se bazezaza
pe descompunerea unei probleme
in subprobleme similare, prin intermediul
unui proces recursiv.

Procesul recursiv continua pana se obtine
o subproblema de dimensiune mica( caz de baza)
dupa care se compun solutiile subproblemelor
pana se obtine solutia problemei initiale

problema:
se da un vector.
sa se calculeze suma elementelor
pare folosind tehnica DIVIDE et IMPERA
**/

#include <iostream>

using namespace std;
int v[101], n, sol;
void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}
void divizeaza(int st, int dr, int &mij)
{
    mij = (st + dr) / 2;
}
void combina(int sol1, int sol2, int &sol)
{
    sol = sol1 + sol2;
}
void div_impera(int st, int dr, int &sol)
{
    int mij, sol1, sol2;
    if (st == dr)
        if (v[st] % 2 == 0)
            sol = v[st];
        else
            sol = 0;
    else
    {
        divizeaza(st, dr, mij);
        div_impera(st, mij, sol1);
        div_impera(mij + 1, dr, sol2);
        combina(sol1, sol2, sol);
    }
}
int main()
{
    citire();
    div_impera(1, n, sol);
    cout << "suma=" << sol;

    return 0;
}