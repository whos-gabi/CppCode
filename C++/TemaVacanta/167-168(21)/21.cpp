#include <bits/stdc++.h>
//
using namespace std;
//
/*
list 1
list par
list impar
buble sort lists crescator
*/
int v[1001], n, par[1001], imp[1001], nr_p = 0, nr_i;

void citire()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

bool parBool(int k)
{
    return (k % 2 == 0) ? 1 : 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void prelucrare(int nr_p, int nr_i, int par[], int imp[])
{

    for (int i = 0; i < n; i++)
    {
        if (parBool(v[i]))
        {
            par[nr_p] = v[i];
            nr_p++;
        }
        else
        {
            imp[nr_i] = v[i];
            nr_i++;
        }
    }
     cout << "sortare si afisare nr pare\n";
    bubbleSort(par, nr_p);
    for (int i = 0; i < nr_p; i++)
    {
        cout << par[i];
    }
    cout<<endl;
    cout << "sortare si afisare nr impare\n";
    bubbleSort(imp, nr_i);
    for (int i = 0; i < nr_i; i++)
    {
        cout << imp[i];
    }
}

int main()
{
    citire();
    prelucrare(nr_p, nr_i, par, imp);
    return 0;
}