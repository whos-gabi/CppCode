#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int v[1005], n, nri, nrp;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];

        
    nri = nrp = 0;
    for (int i = 1; i <= n; ++i)
        if (v[i] % 2 == 0)
            nrp++;
        else
            nri++;
    if (nrp > nri)
        cout << nrp - nri;
    else
        cout << nri - nrp;
    return 0;
}