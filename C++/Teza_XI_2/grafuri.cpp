#include "iostream"
#include "fstream"

using namespace std;

// ----------------------------------------------------------------
int MAX_N, mc[101][101], inf, min, pmin;
void dijkstra(int S)
{
    int d[MAX_N], i, j;
    int viz[MAX_N]; /* viz[i] = daca a fost vizitat sau nu*/
    for (i = 1; i <= n; i++)
    {
        viz[i] = 0;
        d[i] = mc[S][i] ? mc[S][i] : inf;
    }
    viz[S] = 1; 
    int min, pmin = 0;
    for (i = 1; i <= n - 1; i++)
    {
        min = inf; // constanta predefinita
        for (j = 1; j <= n; j++)
            // extrag minimul din d[]
            if (d[j] < min && !viz[j])
            {
                min = d[j];
                pmin = j;
            }
        viz[pmin] = 1;
        for (j = 1; j <= n; j++)
            /* actualizez drumul pana la vecinii minimului*/
            if (mc[pmin][j])
            {
                /* daca am muchie (pmin,j), de cost mc[pmin][j]*/
                if (d[j] > d[pmin] + mc[pmin][j])
                    /* daca pot ajunge in j pe un drum mai bun*/
                    d[j] = d[pmin] + mc[pmin][j];
            }
    }
    cout << "Dijkstra : Distantele de la noul sursa" << S << " la varfurile grafului, in ordine, sunt: ";
    for (i = 1; i <= n; i++)
        cout << d[i];
}
int main()
{

    return 0;
}