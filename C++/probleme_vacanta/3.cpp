#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

//prod cif impare intrun numar

int nr, nnr;

void citire()
{
    cin >> nr;
}

int prelucrare(int nr,int &nnr)
{
    int n = nr, uc;
    while(n!=0){
        uc=n%10;
        nnr++;
        n /= 10;
    }
    return nnr;
}

int main()
{
    citire();
    cout<<prelucrare(nr,nnr);

    return 0;
}