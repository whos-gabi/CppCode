#include <bits/stdc++.h>
//
using namespace std;
//
/*
a[n] b[m]

*/
int a[255], b[255], n, m;

void citire()
{
    cin >> n >> m;
    cout << "Se citesc " << n << " elemente a lui a[]\n";
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }

    cout << "Se citesc " << m << " elemente a lui b[]\n";

    for (int i = 0; i <= m; i++)
    {
        cin >> b[i];
    }
}

bool check1Elem(int a, int b[], int m)
{
    int k;
    for (int i = 0; i <= m; i++)
    {
        if (a < b[i])
        {
            k++;
        }
    }
    if(k==m){
        return 1;
    }else{
        return 0;
    }

}

void prelucrare(int a[],int b[],int n,int m)
{
    int x = 0; // val strict mai mici

    for (int i = 0; i <= n; i++)
    {
        if(check1Elem(a[i],b,m)){
            x++;
        }

    }
    cout<<" val = "<< x;
}

int main()
{

    citire();
    prelucrare(a,b,n,m);
    return 0;
}