#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

//function
bool par(int n)
{
    return n % 2 == 0 ? 1 : 0;  
}

int main()
{
    cout << par(6) << ' ' << par(3);

    return 0;
}