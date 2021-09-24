#include <iostream>

using namespace std;

//sa se realizeze subprogram care primeste nr n
//modificat astfel intre fiecare 2 cifre sa se introduca media celor 2 cifre

int n, result;

void citire()
{
    cin >> n;
}

void algoritm(int &n)
{
    int x = n, p = 1;
    n = 0;
    while (x >= 10)
    {
        n = n + x % 10 * p;
        p = p * 10;
        n = n + (x % 10 + x % 100 / 10) / 2 * p;
        x = x / 10;
        p = p * 10;
    }
    n = n + x * p;
}

int main()
{
    citire();
    algoritm(n);
    cout<<n;

    return 0;
}