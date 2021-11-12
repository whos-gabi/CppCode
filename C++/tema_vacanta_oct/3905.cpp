#include <iostream>

using namespace std;

int main()

{

    int n, m, s, z = 1;

    cin >> n;

    m = n;

    while (m > 9)

    {

        z *= 10;

        m /= 10;
    }

    m = n;

    s = m;

    m = (m % z) * 10 + m / z;

    while (m != n)

    {

        s = s + m;

        m = (m % z) * 10 + m / z;
    }

    cout << s;

    return 0;
}