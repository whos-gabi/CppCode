#include <bits/stdc++.h>
//
using namespace std;
//
//citire patrice arbitrara
//verificare liliile coloanele cu nr pare
//afisarea lor
int n, m, v[1001][1001];
bool p;

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


bool rowCresc(int n, int j)
{
    bool crescator = true;
    for (int i = 2; i <= n; ++i)
        if (v[j][i] < v[j][i - 1])
            crescator = false;

    return crescator;
}

bool colCresc(int m, int j)
{
    bool crescator = true;
    for (int i = 2; i <= m; ++i)
        if (v[i][j] < v[i-1][j])
            crescator = false;

    return crescator;
}

void prelucrare()
{
    cout << "\nPe randuri:\n";
    //pe randuri
    for (int i = 0; i < n; i++)
    {
        if (rowCresc(m, i))
        {
            for (int j = 0; j <= n; j++)
            {
                cout << v[i][j];
            }
            cout << endl;
        }
    }

    cout << "\nPe coloane:\n";
    //merge pe coloane
    for (int i = 0; i < m - 1; i++)
    {
        if (colCresc(n, i))
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j];
            }
            cout << endl;
        }
    }
}

int main()
{

    citire();
    prelucrare();

    return 0;
}