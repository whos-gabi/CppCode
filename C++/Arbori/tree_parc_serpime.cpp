#include <iostream>
#include <fstream>

using namespace std;

int n, m, l[20];
int st[101], dr[101];

//----------------------------------------------------------------

void citire()
{
    // int x, y, c, i = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "nodul " << i << '\n';
        cout << "introduce-ti subarborele stang: " << '\n';
        cin >> st[i];
        cout << endl;
        cout << "introduce-ti subarborele drept: " << '\n';
        cin >> dr[i];
        cout << endl;
    }

    // f.close();
}
void afis_rsd(int i)
{
    cout << i << " ";
    if (st[i] != 0)
    {
        afis_rsd(st[i]);
    }
    if (dr[i] != 0)
    {
        afis_rsd(dr[i]);
    }
}

int main()
{
    citire();
    afis_rsd(1);

    return 0;
}
