#include <iostream>
using namespace std;

//produs cartezian backtracking iterativ
int a[20][30], x[101], v[101], n, k;

void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        for (int j = 1; j <= v[i]; j++)
        {
            cin >> a[i][j];
        }
    }
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i][x[i]] << ' ';
    }
    cout<<endl;
}

void backt()
{
    k = 1;
    x[k] = 0;
    do
    {
        while (x[k] < v[k])
        {
            x[k]++;
            if (x[k] == n)
            {
                afis();
            }
            else
            {
                x[++k] = 0;
            }
        }
        k--;
    } while (k);
}

int main()
{

    citire();
    backt();
    return 0;
}