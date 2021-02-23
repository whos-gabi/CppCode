#include <iostream>

using namespace std;
/*
Acest program afla suma cirfelor dintr-un nr
*/

long x;

void citire()
{
    cin >> x;
}

int sumCif(long x)
{
    int s = 0, f;

    while (x)
    {
        f = x % 10;
        s += f;
        x /= 10;
    }
    return s;
}

int sumCifRec(long n)
{
    if (n == 0)
        return 0;
    else
        return sumCifRec(n / 10) + n % 10;
}
int main()
{ 
    //se citeste nr
    citire();
    //func iterativa
    cout << sumCif(x);
    //func recursiva
    cout << sumCifRec(x);

    return 0;
}