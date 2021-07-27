#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

//prod cif impare intrun numar

int nr, k, p = 1;

void citire()
{
    cin >> nr >> k;
}

int prelucrare(int nr, int k)
{
    int n = nr, uc, z, m;
    while (n != 0)
    {
        uc = n % 10;
        if (uc != k)
        {
            p *= uc;
        }
        else
        {
            m++;
        }
        z++;
        n /= 10;
    }
    if (z == m)
    {
        return 0;
    }
    else
    {
        return p;
    }
}

int main()
{
    citire();
    cout << prelucrare(nr, k);

    return 0;
}