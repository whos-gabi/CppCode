#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int n, v[1001], maxi=0;

void citire()
{
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>v[i];
    }
    
}

int prelucrare(int n, int v[], int &maxi)
{
    for (int i = 1; i <= n; i++)
    {
        if (v[i]>maxi)
        {
            maxi=v[i];
        }
    }

    return maxi;
}

int main()
{
    citire();
    cout<<prelucrare(n,v,maxi);
    return 0;
}