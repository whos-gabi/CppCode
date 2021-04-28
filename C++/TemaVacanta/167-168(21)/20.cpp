#include <bits/stdc++.h>
//
using namespace std;
//
int n, m, x[1001], y[1001], z[1001];

void citire()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
}

void prelucrare()
{
    //alaturarea sirurilor

    int k = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (x[i] < y[j])
        {
            z[k] = x[i];
            k++;
            i++;
        }
        else
        {
            z[k] = y[j];
            k++;
            j++;
        }
    }

    if (i <= n)
    {
        for (int p = i; p < n; p++)
        {
            z[k] = x[p];
            k++;
        }
    }
    if (j <= m)
    {
        for (int p = j; p < m; p++)
        {
            z[k] = y[p];
            k++;
        }
    }
    //test
    for (int i = 0; i < n + m; i++)
    {
        cout << z[i];
    }
    //bool sort
    //eliminarea nr negative
}

int main()
{

    citire();
    prelucrare();
    return 0;
}