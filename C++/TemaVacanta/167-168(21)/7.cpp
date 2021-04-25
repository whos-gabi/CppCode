#include <bits/stdc++.h>
//
using namespace std;
//
// se introduc n numere sa se afiseze cate sunt prime
int n, v[255], f;
void citire()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }
}

bool isPrim(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void prelucrare(int v[],int n, int &f)
{

    f=0;
    for (int i = 0; i <=n; i++)
    {
        if(isPrim(v[i])){
            f++;
        }
    }
    
}

int main()
{

    citire();
    prelucrare(v,n,f);
    cout<<"raspuns: "<<f;
    return 0;
}