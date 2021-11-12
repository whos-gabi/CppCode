#include <iostream>
using namespace std;
//backtracking combinari de bancnote

int x[101], v[101], s, n, k;

void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    cin >> s;
}

int suma(int k)
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum = sum + x[i] * v[i];
    }
    return sum;
}
bool verif(int k)
{
    return suma(k) == s;
}

void afis(int k)
{
    cout << s << " = ";
    for (int i = 1; i <= k; i++)
    {
        /* code */
        if (x[i])
        {
            cout << x[i] << " b "<<"* "<< v[i] << " lei "<<"+ ";
        }
    }
    cout <<0<< endl;
}

void bkt(int k)
{
    for (int i = 0; i <= s / v[k]; i++)
    {
        x[k] = i;
        if (suma(k) <= s)
        {
            if (k == n)
            {
                if (verif(k))
                    afis(k);
            }
            else
            {
                bkt(k + 1);
            }
        }
    }
}

int main()
{
    citire();
    bkt(1);
    return 0;
}