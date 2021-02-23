#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

/*
La un depozit de materiale exista n produse.
 Pentru fiecare produs se cunoaste:
  nume_produs, cantitate, pret.
Se cere: a)valoarea pentru fiecare produs
         b)cantitatea pe tipuri de produse

Ex: n=5
  Ulei    10   40
  Zahar   5    30
  Faina   20   10
  Ulei    20   40
  Faina   50   10

Se afiseaza:
 a)
  Ulei    10   40  400
  Zahar   5    30  150
  Faina   20   10  200
  Ulei    20   40  800
  Faina   50   10  500

b) ulei    30
   zahar   5
   faina   70

*/

struct depozit
{
    char nume_produs [21];
    int cantitate;
    int pret;
};
 depozit v[101];

int n;
int numar;

void citire ()
{
       cin >> n;
    for (int i=1; i <=n; i++) 
    
{
    cin.get (v[i].nume_produs, 21);
         cin.get ();
         cin >> v[i].cantitate;
         cin >> v[i].pret;
        
}
}

void cantitate(int &nr, depozit v[101], int n)
{
    int nr = 0;

for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if ((v[i].nume_produs, 21) == (v[j].nume_produs, 21))
                nr = v[i].cantitate + v[j].cantitate;
    }
}

int main()
{
    citire();
    cantitate(nr, v, n);
    cout << "cantiate totale = "<< nr;
     return 0;
}