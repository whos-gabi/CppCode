#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int nr, big;

int main()
{
    cin >> nr;
    int n = nr, uc;
    while (n != 0)
    {
        uc = n % 10;
        if (uc >= big)
        {
            big = uc;
        }
        n /= 10;
    }
    cout << big;
    return 0;
}