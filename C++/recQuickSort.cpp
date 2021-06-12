#include <iostream>
using namespace std;
int n, v[101];
void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}
void divizeaza(int st, int dr, int &mij)
{
    int i, j, pi = 0, pj = 1;
    i = st;
    j = dr;
    while (i < j)
    {
        if (v[i] > v[j])
        {
            swap(v[i], v[j]);
            swap(pi, pj);
        }
        i = i + pi;
        j = j - pj;
    }
    mij = i;
}
void quicksort(int st, int dr)
{
    int mij;
    if (st < dr)
    {
        divizeaza(st, dr, mij);
        quicksort(st, mij - 1);
        quicksort(mij + 1, dr);
    }
}
void afis()
{
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
}
int main()
{
    citire();
    quicksort(1, n);
    afis();
    return 0;
}