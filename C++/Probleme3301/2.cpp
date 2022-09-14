#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");
// ofstream fout("g.out");

int a[100][100], k, n, m, p[100];

void citire()
{
    int i, j, x;
    fin >> n >> m;
    for (x = 1; x <= m; x++)
    {
        fin >> i >> j;
        a[i][j] = 1;
        a[j][i] = 1;
    }
}

void df(int k)
{
    int i;
    cout << k << " ";
    p[k] = 1;
    for (i = 1; i <= n; i++)
        if (a[k][i] == 1 && p[i] == 0)
            df(i);
}
// componenta maxima conexa a grafului
void afis()
{
    int i;
    cout << "CMM Componenta conexa : ";
    for (i = 1; i <= n; i++)
        if (p[i] != 0)
        {
            df(i);
        }
    cout << '\n';
}

int main()
{
    citire();
    for(k=1;k<=n;k++)
    	if(!p[k])
    	{
    		df(k);
    		cout<<endl;
    	}
    // df(3);
    afis();
    fin.close();
    return 0;
}