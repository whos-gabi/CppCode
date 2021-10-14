#include <iostream>
#include <fstream>

using namespace std;

ifstream cini("permpf.in");
ofstream couti("permpf.out");

int n , x[10] , p[10] , a[10];

void afisare()
{
    for(int i = 1 ; i <= n ; i++)
        couti << x[i] << " ";
    couti << '\n';
}

void back(int k)
{
    for(int i = 1 ; i <= n ; i++)
        if(!p[i] && k != i)
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
    cini >> n;
    back(1);
    return 0;
}