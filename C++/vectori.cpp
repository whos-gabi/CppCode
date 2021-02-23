#include <iostream>
using namespace std;

int main()
{
    int n, f[10] = {0}, c, x, v[101];
    cin >> x;

    /*127006342*/
    
    for (int i = 0; i <= 9; i++)
        cout << i << " ";
    cout << endl;

    for (int i = 0; i <= 9; i++)
        cout << f[i] << " ";
    cout << endl;

    while (x)
    {
        c = x % 10;
        f[c] = f[c] + 1;
        x /= 10;
    }
    for (int i = 0; i <= 9; i++)
        cout << f[i] << " ";
}