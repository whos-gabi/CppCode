#include <iostream>
#include <fstream>
//
using namespace std;
//
int a[101][101], n, m, x, y;
int inc[101][101];
char el[20][20];

ifstream fin("in.in");
ifstream m_in("in_mi.in");

ifstream in("listavecini.in");
ofstream out("listavecini.out");

int w[101][101];

/*
intrun grup de elevi axista mai multe relatii de prietenie
sa se indentifice elevul/elevii care au nr maxim de relatii de prietenie


reprezentarea grafurilor prin intermediul matricei de incidenta
-este tot binara
-nu este neaparat patratica
-nr de col == nr de muchii din graf
-fiecare col are 2 de 1, in rest 0
*/

// citire matrice de incidenta
void citire_mi()
{
    m_in >> n >> m;
    for (int j = 1; j <= m; j++)
    {
        m_in >> x >> y;
        inc[x][j] = inc[y][j] = 1;
    }
}

// afis matrice de incidenta
void afis_mi()
{
    cout << "0| - - - - - - - - -\n";

    for (int i = 1; i <= n; i++)
    {
        cout << i << "|";
        for (int j = 1; j <= m; j++)
        {
            cout << " " << inc[i][j];
        }
        cout << '\n';
    }
}

// void citire()
// {
//     fin >> n >> m;
//     for (int i = 1; i <= m; i++)
//     {
//         fin >> x >> y;
//         a[x][y] = a[x][y] = 1;
//     }
// }

// void maximum()
// {
//     int maxi = 0, k = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (maxi < grad(i, n))
//         {
//             maxi = grad(i, n);
//             k = i;
//         }
//     }
//     // afis(maxi,k);
// }

// void elevi()
// {
//     char el[20][20];
//     int n2;
//     cin >> n2;
//     cin.get();
//     for (int i = 1; i <= n; i++)
//     {
//         cin.getline(el[i], 30);
//     }
// }

// void afis_elevi(int maxi)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (grad(i, n) == maxi)
//             cout << el[i] << " ";
//     }
// }

int grad(int vf, int nr)
{
    int gr = 0;
    for (int i = 1; i <= nr; i++)
    {
        /* code */
        if (inc[vf][i] == 1)
        {
            gr++;
        }
    }
    return gr;
}

void toateVfCuAcelasiGrad()
{
    cout << "Acelasi grad:\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (grad(i, m) == grad(j, m))
            {
                cout << "varf: " << i << "\ngrad: " << grad(i, m) << '\n';
                cout << "varf: " << j << "\ngrad: " << grad(j, m) << '\n';
                cout << "___________________>\n";
                // cout << " " << i <<" "<< grad(i, m)<<" and " << j <<" "<<grad(j,m)<<'\n';
            }
        }
    }
}

void afisVarfIzolate()
{
    for (int i = 1; i <= n; i++)
    {
        if (grad(i, m) == 0)
        {
            cout << i << " = vf izolat\n";
        }
    }
}

void afisListaDeAdeacenta()
{
    int n, a, b;
    in >> n;
    while (in >> a >> b)
    {
        w[a][b] = 1, w[b][a] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        int k = 0;
        for (int j = 1; j <= n; j++)
            if (w[i][j])
                k += 1;
        out << k << " ";
        for (int j = 1; j <= n; j++)
            if (w[i][j])
                out << j << " ";
        out << endl;
    }
}

void prelucrare()
{
}

int main()
{
    // citire_mi();
    // afis_mi();
    // afisVarfIzolate();
    // toateVfCuAcelasiGrad();

    afisListaDeAdeacenta();

    return 0;
}