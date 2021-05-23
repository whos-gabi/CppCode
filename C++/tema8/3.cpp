//Lucrare practică № 4
/*Programul afişează doar numerele prime dintr-un tablou de numere întregi pozitive.*/
#include <bits/stdc++.h>
using namespace std;

int v[1001], n;

void citire()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

bool isPrim(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void prelucrare()
{
    cout<<"Afisare: \n";
    for (int i = 0; i < n; i++)
    {
        if (isPrim(v[i]))
        {
            cout<<v[i]<<" ";
        }
    }
}

int main()
{
    citire();
    prelucrare();
    return 0;
}
