#include <bits/stdc++.h>
//
using namespace std;
//
//intersectia reuniunea diferenta

int mul1[1001];
int mul2[1001];
int reuniune[2002];
int intersectie[10001];
int diferenta12[10001];
int diferenta21[10001];
int n1, n2, nu = 0, ni = 0, nd12 = 0, nd21 = 0;
int i, j;

int validare(int *multime, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (multime[i] == multime[j])
            {
                n--;
                multime[j] = multime[n];
            }
    return n;
}

void citire()
{
    // citim datele
    cin >> n1;
    for (i = 0; i < n1; i++)
    {
        cin >> mul1[i];
    }

    cin >> n2;
    for (i = 0; i < n2; i++)
    {
        cin >> mul2[i];
    }
}

void elimNrRepet()
{
    // eliminam ce se repeta
    n1 = validare(mul1, n1);
    n2 = validare(mul2, n2);
}

void prelucrare()
{
    elimNrRepet();

    for (i = 0; i < n1; i++)
    {
        int gasit = 0;
        reuniune[nu] = mul1[i];
        nu++;
        for (j = 0; (j < n2) && (!gasit); j++)
            if (mul1[i] == mul2[j])
            {
                intersectie[ni] = mul1[i];
                ni++;
                gasit = 1;
            }
        if (!gasit)
        {
            diferenta12[nd12] = mul1[i];
            nd12++;
        }
    }

    // calculam diferenta 2-1: elementele din 2 care nu sunt in 1
    // completam reuniunea cu diferenta 2-1
    for (j = 0; j < n2; j++)
    {
        int gasit = 0;
        for (i = 0; (i < n1) && (!gasit); i++)
            if (mul1[i] == mul2[j])
                gasit = 1;
        if (!gasit)
        {
            reuniune[nu] = diferenta21[nd21] = mul2[j];
            nd21++;
            nu++;
        }
    }

    //afisam
    cout << "Reuniune\n";
    for (i = 0; i < nu; i++)
        cout << reuniune[i];
    cout << "\nIntersectie: ";

    if (ni)
        for (i = 0; i < ni; i++)
            cout << intersectie[i];
    else
        cout << "Multimea Vida";

    cout << "\nDiferenta Mul1-Mul2: ";

    if (nd12)
        for (i = 0; i < nd12; i++)
            cout << diferenta12[i];
    else
        cout << "Multimea Vida";

    cout << "\nDiferenta Mul2-Mul1: ";
    if (nd21)
        for (i = 0; i < nd21; i++)
            cout << diferenta21[i];
    else
        cout << "M. Vida";
}

int main()
{
    citire();
    prelucrare();
    
    return 0;
}
