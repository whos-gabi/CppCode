#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream in("hamilt.in");
ofstream out("hamilt.out");

// variabile globale
int a[101][101], x[101], n, m, z, y;
// var secundare
int ok = 0, k, p;


void citire()
{
    in >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        in >> z >> y;
        a[z][y] = a[y][z] = 1;
    }
}
bool cond(int k)
{
    for (int i = 1; i < k; i++)
    {
        // if
        if (x[i] == x[k])
        {
            return 0;
        }
        //
        if (k > 1)
        {
            if (a[x[k]][x[k - 1]] == 0)
            {
                return 0;
            }
        }
        //
        if (k == n)
        {
            if (a[x[1]][x[1]] == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void afis(int k)
{
    for (int i = 1; i <= k; i++)
    {
        cout << x[i] << " ";
        cout << x[1] << "\n";
    }
}

void backt(int k)
{
    for (int i = 1; i <= n; i++)
    {
        x[k] = i;
        if (cond(k))
        {
            if (n == m)
            {
                afis(k);
            }
            else
            {
                backt(k + 1);
            }
        }
    }
}

void ciclu()
{
    cout << "Dati vf de plecare: ";
    cin >> p;
    ok = 0;
    backt(1);
    if (!ok)
    {
        cout << ">>Nu exista graf hamiltonian \n";
    }
    else
    {
        cout << ">>Exista graf hamiltonian \n";
    }
}

// void citire();
// bool cond(int k);
// void afis();
// void backt(int k);
// void ciclu();

int main()
{
    // apel functii
    citire();
    ciclu();

    return 0;
}