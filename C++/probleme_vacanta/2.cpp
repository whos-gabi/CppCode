#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

//prod cif impare intrun numar

int nr, p = 1;

void citire()
{
    cin >> nr;
}

int imPar(int k)
{
    return k % 2 != 0;
}

int prelucrare(int nr, int &p)
{
    int n = nr, uc, z;
    while (n != 0)
    {
        uc = n % 10;
        if (imPar(uc))
        {
            p *= uc;
            z++;
        }
        n /= 10;
    }
    if (z != 0)
    {
        return -1;
    }
    else
    {
    return p;
    }
}

int main()
{
    citire();
    cout << prelucrare(nr, p);

    return 0;
}