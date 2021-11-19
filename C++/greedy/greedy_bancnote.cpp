#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bancnote.in");
ofstream g("out_bancnote.out");

//var
int nr_banc, v[100], S, sol[100], ord[100], aux;
//buggy aux, greedy, afi
void citire()
{
    f >> S;       //citire suma
    f >> nr_banc; //citire nr de bancnote
    for (int i = 1; i <= nr_banc; i++)
    {
        f >> v[i];
    }
    aux = S;
}

void ordonare()
{
    /* sortare in ordine descrescatoare a vect de bancnote */
    for (int i = 1; i <= nr_banc; i++)
    {
        for (int j = i + 1; j <= nr_banc; j++)
        {
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
}

void greedy()
{
    int i = 1, j = 0;
    while (S != 0 && i <= nr_banc)
    {
        if (S > v[i])
        {
            j++;
            sol[j] = S / v[i];
            S = S - v[i] * sol[j];
            ord[j]=i;//??
        }
        i++;
    }
}

void afis(int S)
{
    cout << "SUMA " << S << " =\n";
    for (int i = 1; i <= nr_banc; i++)
    {
        /* code */
        cout << sol[i] << " bancnote de " << v[i] <<" = "<<sol[i]*v[i]<<endl;
    }
}

int main()
{
    citire();
    ordonare();
    greedy();
    afis(aux);
    return 0;
}
