#include <bits/stdc++.h>
//
using namespace std;
//
/*
se citeste n nr naturlale
numerele rotunde < n
nr.rotund = nr.binar care are acelasi nr de 1 si 0
ex  15 = 1111
    20 = 1010
*/
int n, v[255];
void citire()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }
}

bool checkIfRotund(int n)
{
    int binaryNumber[100], num = n;
    int i = 0;
    while (n > 0)
    {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }

    int z = 0, u = 0;
    for (int j = i - 1; j >= 0; j--)
    {
        if (binaryNumber[j] == 0)
        {
            z++;
        }
        else
        {
            u++;
        }
    }

    if (z == u || z == 0 || u == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void prelucrare(int v[],int n)
{
    for (int i = 0; i <= n; i++)
    {
        if(checkIfRotund(v[i])){
            cout<<v[i]<<'\n';
        }
    }
}

int main()
{
    citire();
    prelucrare(v,n);
    return 0;
}