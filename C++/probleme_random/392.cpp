// #include <bits/stdc++.h>
// #include <cstring>
// #include <string>
// #include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cladire.in");
ofstream fout("cladire.out");

int a[1001][1001], n, m;

void citire()
{
    fin >> m >> n;
    for (int i = 1; i <= n; i++)
        a[i][1] = 1;
    for (int j = 1; j <= m; j++)
        a[1][j] = 1;
}
void prel(){
for (int i = 2; i <= n; i++)
        for (int j = 2; j <= m; j++)
        {
            a[i][j] = (a[i][j - 1] + a[i - 1][j]) % 9901;
        }
}
void afis(){
    fout << a[n][m];
}

int main()
{
    citire();
    prel();
    afis();
    
    /*    for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
                cout<<a[i][j]<<' ';
            cout<<'\n';
        }
    */

    return 0;
}