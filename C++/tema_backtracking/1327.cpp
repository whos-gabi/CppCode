#include <iostream>
#include <fstream>

using namespace std;

ifstream cinf("sirpie.in");
ofstream coutf("sirpie.out");

int n , x[10] , p[10] , a[10];

int cmmdc(int a , int b)
{
    int r;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    if(a == 1)return 1;
    else return 0;
}

void afisare()
{
    int ok = 0;
    for(int i = 1 ; i < n ; ++i)
        if(!cmmdc(a[x[i]] , a[x[i+1]])) ok = 1;
    if(ok == 0)
    {
        for(int i = 1 ; i <= n ; ++i)
            coutf << a[x[i]] << ' ';
        coutf << endl;
    }
}

void back(int k)
{
    for(int i = 1 ; i <= n ; i++)
        if(!p[i])
        {
            x[k] = i;
            p[i] = 1;
            if(k == n) afisare();
            else back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    cinf >> n;
    for(int i = 1 ; i <= n ; i++)
        cinf >> a[i];
    sort(a + 1 , a + n + 1);
    back(1);
    return 0;
}