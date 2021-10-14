#include <iostream>
#include <cmath>
using namespace std;

//broken problema
int a[20][30], x[101], v[101], n, k;

void citire()
{
    cin >> n;
}

bool cond(int k)
{
    for (int i = 1; i < k; i++)
    {
        if (x[i] == x[k] || abs(x[k] - x[i]) == abs(k - 1))
        {
            return 0;
        }
    }
    return 1;
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i] == j)
            {
                cout << " D ";
            }
            else
            {
                cout << " * ";
            }
            cout << '\n';
        }
    }
}

void backt()
{
    k = 1;
    x[k] = 0;
    do
    {
        while (x[k] < v[k])
        {
            x[k]++;
            if (cond(k))
            {
                if (x[k] == n)
                {
                    afis();
                }
                else
                {
                    x[++k] = 0;
                }
            }
        }
        k--;
    } while (k);
}

int main()
{

    citire();
    backt();
    return 0;
}