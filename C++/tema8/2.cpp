//Lucrare practică № 6
/*Într-un tablou de N numere reale de găsit elementele minimal și de schimbat cu primul element*/
#include <bits/stdc++.h>
using namespace std;

int n, v[1001], mini;

void citire()
{
    cout << "Citire nr de elem vector:\n";
    cin >> n;
    cout << "Citire elem vector:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

void afisare()
{   
    cout<<"Afisare: \n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void prelucrare()
{
    mini = v[0];
    int k;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < mini)
        {
            mini = v[i];
            k = i;
        }
    }

    v[k] = v[0];
    afisare();
}

int main()
{
    citire();
    prelucrare();
    return 0;
}
