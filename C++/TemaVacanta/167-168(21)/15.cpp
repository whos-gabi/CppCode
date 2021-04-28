#include <bits/stdc++.h>
//
using namespace std;
//

int n, m, v[1001][1001];

void citire()
{
    //v[n][m]
    cout << "citire dimensiuni matrice: ";
    cin >> n >> m;
    cout << "citire matrice: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}

void prelucrare()
{
    //sa se afiseze in ordine crescatoare elementele de pe conturul matricii

}

int main()
{

    citire();
    prelucrare();
    return 0;
}