#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;
/*
se da un vector de vr intregi care sunt rotunde si au cifrele <= 5
sa se rotunjeasca nr

atunci cand este convertit in baza 2 nr de rest 0 = nr de rest 1
ex:
 12(1100)
 13(1101)
 678 -INCORECT 
*/

int v[101], a[101], i, j, n, m;
void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}
bool conversie(int x)
{
    int r, nr0, nr1;
    nr0 = nr1 = 0;
    while (x)
    {
        r = x % 2;
        if (r == 1)
            nr1++;
        else
            nr0++;
        x /= 2;
    }

    return nr0==nr1;
}
bool cifre(int x)
{
    int c;
    while (x)
    {
        c = x % 10;
        if (c > 5)
            return 0;
        x /= 10;
    }
    return 1;
}

void formare(int v[], int n, int a[], int &m){
    m=0;
    for(int i=1; i<=n; i++){
        if(cifre(v[i]) && conversie(v[i])){
            a[++m]=v[i];
        }
    }
}

void afis(int a[], int m){
    for(int i=1; i<=m; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    citire();
    formare()
    return 0;
}