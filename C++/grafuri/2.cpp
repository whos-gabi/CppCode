#include <iostream>
#include <fstream>
// LANT
using namespace std;
//
int sol[101];
int inc[101][101];
int n, m, x, y, k = 0, p, q;

ifstream fin("lant.in");

void citire()
{
    fin >> n >> m;
    for (int j = 1; j <= m; j++)
    {
        fin >> x >> y;
        inc[x][y] = inc[y][x] = 1;
    }
}

void afis(int n, int m, int inc[101][101])
{
    cout << "n_";
    for (int i = 1; i <= n; i++)
    {
        cout << "_" << i;
    }
    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        cout << i << "|";
        for (int j = 1; j <= n; j++)
        {
            cout << " " << inc[i][j];
        }
        cout << '\n';
    }
}

void afis2(int k)
{
    for (int i = 1; i <= k; ++i)
    {
        cout << sol[i] << ' ';
    }
    cout << endl;
}

bool cond(int k)
{
    if (inc[sol[k - 1]][sol[k]] == 0)
        return 0;
    for (int i = 1; i < k; ++i)
        if (sol[i] == sol[k])
            return 0;
    return 1;
}

void back()
{
    k = 2;
    sol[k - 1] = p;
    sol[k] = 0;
    do
    {
        while (sol[k] < n)
        {
            sol[k]++;
            if (cond(k))
            {
                if (sol[k] == q)
                {

                    afis2(k);
                }
                else
                {
                    k++;
                    sol[k] = 0;
                }
            }
        }
        k--;
    } while (k > 1);
}

int main()
{
    citire();
    afis(n, m, inc);
    sol[1]=p;
    back();
    return 0;
}
/*
cond =
se da un graf g cu n vf si m muchii
sa se afiseze toate lanturile de la un vf de plecare dat in fisier 
la restul vf grafului

*/