#include <fstream>
using namespace std;

ifstream f("ciclu.in");
ofstream g("ciclu.out");

int n,m, a[105][105], viz[205], p, ok = 0;
int i, j;

void afis(int k)
{
    for (int i = 1; i <= k; ++i)
        g << viz[i] << " ";
    g << p << " ";
    ok = 1;
}

bool cond(int k)
{
    if (a[viz[k - 1]][viz[k]] != 1)
        return false;
    for (int i = 1; i < k; ++i)
        if (viz[k] == viz[i])
            return false;
    return true;
}

void back(int k)
{
    //
    for (int i = 1; i <= n && !ok; ++i)
    {
        viz[k] = i;
        if (cond(k))
        {
            if (a[viz[k]][p] == 1 && k > 2){
                afis(k);
            }
            back(k + 1);
        }
    }
}

void citire()
{
    // f >> n >> m;
    // while (m > 0)
    // {
        
    //     a[i][j] = a[j][i] = 1;
    //     m--;
    // }
    // f >> p;
    
    f >> n >> m;
    while (f >> i >> j)
    {
        a[i][j] = a[j][i] = 1;
    }
    f >> p;
    
}

int main()
{
    citire();
    viz[1] = p;
    back(2);
    return 0;
}