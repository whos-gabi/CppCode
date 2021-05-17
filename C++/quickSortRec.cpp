#include <iostream>

using namespace std;
/**
METODA QUICKSORT (cea mai rapida metoda de sortare)
Metoda quicksort are la baza tehnica divide et impera.
Functia "divizeaza" imparte sirul in 2, dar nu neaparat in 2 parti egale.
Variabila "mij" va avea elementul v[mij] numit si element pivot cu propr. ca toate elem. din
stanga lui v[mij] sunt < decat el si toate elementele din dreapta lui sunt > decat el.
Cand se autoapeleaza prima parte se exclude elem. din pozitia mij ptc. acesta e pe locul
lui final( quicksort(st,mij-1) ).
Actualizarea pozitiilor i si j se face indiferent de interschimbarea elementelor.

7
20 67 8 5 80 2 1
1 2 5 8 20 67 80

**/
int n, v[101];
void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
}
void divizeaza(int st, int dr, int &mij)
{
    int i, j, pi = 0, pj = 1;
    i = st;
    j = dr;
    while (i < j)
    {
        if (v[i] > v[j])
        {
            swap(v[i], v[j]);
            swap(pi, pj);
        }
        i = i + pi;
        j = j - pj;
    }
    mij = i;
}
void quicksort(int st, int dr)
{
    int mij;
    if (st < dr)
    {
        divizeaza(st, dr, mij);
        quicksort(st, mij - 1);
        quicksort(mij + 1, dr);
    }
}
void afis()
{
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
}
int main()
{
    citire();
    quicksort(1, n);
    afis();
    return 0;
}