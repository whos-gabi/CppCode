#include <bits/stdc++.h>
//
using namespace std;
//
/*citeste matrice patratica
imparte matricea in 4 parti 
nord = suma lor
sud =produsul lor
vest = cate sunt pare
est = media aritmetica

  N
w   E
  S

N 
    i<j && i+j<n-1
S
    i>j && i+j>n-1
W
    i>j && i+j<n-1
E
    i<j && i+j>n-1

*/
//Declarare:
int n, a[1001][1001];
void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

bool par(int k)
{
    return (k % 2 == 0)?1:0;
}

void prelucrare()
{
    //nord = suma lor
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i < j && i + j < n - 1)
            {
                s += a[i][j];
            }
        }
    }
    cout << "N Suma este:" << s << endl;

    //sud =produsul lor
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > j && i + j > n - 1)
            {
                p *= a[i][j];
            }
        }
    }
    cout << "S Produsul este:" << p << endl;

    //vest = cate sunt pare
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > j && i + j < n - 1)
            {
                if (par(a[i][j]))
                {
                    k++;
                }
            }
        }
    }
    cout << "W Sunt pare:" << k << endl;

    //est = media aritmetica
    int m = 0, nr = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i < j && i + j > n - 1)
            {
                nr++;
                m += a[i][j];
            }
        }
    }
    m/=nr;
    cout << "E Media aritetica:" << m << endl;
}

int main()
{
    citire();
    prelucrare();
    return 0;
}