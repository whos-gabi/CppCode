#include <bits/stdc++.h>
//
using namespace std;
//
//nr de cifre a unui nr natural transmis ca parametru

int func(int x){

    int n = x, num=0; 

    while (n != 0)
    {
        n /= 10;
        num++; 
    }
    return num;
}


int main()
{
    cout<<func(1254);
    return 0;
}