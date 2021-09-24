#include <iostream>
using namespace std;
int main()
{
    int a[25][25], n, i, j, k;
    cin >> n;
    k = n;
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
            a[i][j] = k;
        k = k - 1;
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i == j)
                a[i][j] = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}