#include <fstream>

using namespace std;

ifstream f("ciclu.in");
ofstream g("ciclu.out");

int n, a[105][105], x[205], p, k = 0;

void afis(int k)
{
    for (int i = 1; i <= k; ++i)
        g << x[i] << " ";
    g << p << " ";
    k = 1;
}

int cond(int k)
{
    if (a[x[k - 1]][x[k]] != 1)
        return 0;
    for (int i = 1; i < k; ++i)
        if (x[k] == x[i])
            return 0;
    return 1;
}

void back(int k)
{
    for (int i = 1; i <= n && !k; ++i)
    {
        x[k] = i;
        if (cond(k))
        {
            if (a[x[k]][p] == 1 && k > 2)
                afis(k);
            back(k + 1);
        }
    }
}

void citire()
{
    int i, j, m;
    f >> n >> m;
    while (m > 0)
    {
        f >> i >> j;
        a[i][j] = a[j][i] = 1;
        m--;
    }
    f >> p;
}

int main()
{
    citire();
    x[1] = p;
    back(2);
    return 0;
}