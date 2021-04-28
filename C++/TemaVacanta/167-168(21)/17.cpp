#include <bits/stdc++.h>
//
using namespace std;
//
int n, v[101], p = 1, nrForm;

void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}

bool palindrom(int x)
{
    int aux = x, newnr;
    //reverse the nr
    while (x)
    {
        newnr = newnr * 10 + x % 10;
        x /= 10;
    }

    return newnr == aux;
}

void prelucrare()
{
    for (int i = 1; i <= n; i++)
    {
        while (v[i] >= 10)
            v[i] /= 10;
        nrForm = nrForm * 10 + v[i];
    }
}

void outputRaspuns()
{
    cout << "nr format cu primele cifre este " << nrForm << endl;
    /// apelam functia palindrom pentru numarul format cu primele cifre
    cout<<(palindrom(nrForm) == 1)?"Da, este palindrom ":"Nu este palindrom";
}

int main()
{
    citire();
    prelucrare();
    outputRaspuns();
    return 0;
}

