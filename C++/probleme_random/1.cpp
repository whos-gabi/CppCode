#include <iostream>

using namespace std;
int v[101][101], n, s;

void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }
}

int prelucrare(int n, int v[101][101])
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= i + 1; j++)
        {
             s+=v[i][j]+v[j][i];
        }
    }
    return s;
}

int main()
{
    citire();
    cout<<prelucrare(n,v);
    return 0;
}