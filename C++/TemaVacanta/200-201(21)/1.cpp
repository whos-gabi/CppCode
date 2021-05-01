#include <bits/stdc++.h>
//
using namespace std;
//
//program recursiv de inmultire a 2 numere
int a, b;
void citire()
{
    cin>>a>>b;
}

void prelucrare(int a,int b,int k)
{
    if(k<a){
        return prelucrare(a,b,k++);
        
    }
}

int main()
{
int k=0;
    citire();
    prelucrare(a,b,k);
    return 0;
}