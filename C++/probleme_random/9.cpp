#include <iostream>
using namespace std;

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
    for (int i = 0; i <= k; i++)
    {
        x[k] = i;
        if(!p[i]) 
        {
            x[k] = i;
            p[i] = 1;
            if(k == n) afisare();
            else back(k + 1);
            p[i] = 0;
        }
    }
}

int main()
{
    citire();
    bkt(1);
    return 0;
}