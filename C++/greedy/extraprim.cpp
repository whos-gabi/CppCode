#include <iostream>
#include <fstream>

//extraprim - daca nr este prim si nr obtinute prin truncherea cirfelor la fel
using namespace std;

ifstream f("extraprim.in");
// ofstream g("out_bancnote.out");

//var
int nr;
int n, d, p;

/*
n ab =
nr1 = a*10 + b
nr2 = b*10 + c
------------------
n abc =
c1 = n%10
c2 = n/10%10
c3 = n/100
nr1 = a*100 + b*10 + c
nr2 = a*100 + c*10 + b
nr3 = b*100 + a*10 + c
nr4 = b*100 + c*10 + a
nr5 = c*100 + b*10 + a
nr6 = c*100 + b*10 + a

*/

void citire()
{
    cin >> nr;
}
/*
 Scrieţi definiţia completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 3 cifre (a>1) nr
- returnează suma tuturor exponenţilor din descompunerea în factori primi a valorii
parametrului a.
Exemplu: pentru a=90 subprogramul va returna valoarea 4, deoarece a=2*32
*5 şi
1+2+1=4.
*/
int nrcif(int n)
{
    int k;
    while (n > 0)
    {
        k++;
        n = n / 10;
    }
    return k;
}

bool prim(int n)
{
    if (n < 2)
        prim = 0;
    else
    {
        prim = 1; //presupunem ca n este prim
        for (d = 2; d * d <= n; d++)
            if (n % d == 0)
            {
                prim = 0;
                break;
            }
        return prim == 1;
    }
}

void f(int nrcif)
{
    switch (nrcif)
    {
    case 1:
        /* o cifra */
        cout << "Cazul 1";

        if (prim(nr))
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
        break;
    case 2:
        /* 2 cifre */
        cout << "Cazul 2";

        int a = n % 10, b = n / 10 % 10;
        int nr1 = a * 10 + b, nr2 = b * 10 + c;
        if (prim(nr1) && prim(nr2))
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
        break;
    case 3:
        /* 3 cifre */
        cout << "Cazul 3";
        int k = 0;
        int a = n % 10, b = n / 10 % 10, c = n / 100;
        int nr1 = a * 100 + b * 10 + c;
        int nr2 = a * 100 + c * 10 + b;
        int nr3 = b * 100 + a * 10 + c;
        int nr4 = b * 100 + c * 10 + a;
        int nr5 = c * 100 + b * 10 + a;
        int nr6 = c * 100 + b * 10 + a;
        int abc[5] = {nr1,
                      nr2,
                      nr3,
                      nr4,
                      nr5,
                      nr6};
        for (int i = 0; i <= 5; i++)
        {
            /* code */
            if (prim(abc[i]))
            {
                k++;
            }
        }

        if (k == 6)
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
        break;

    default:
        cout << "ERROR\n";
        break;
    }
}

void greedy()
{
}

void afis()
{
}

int main()
{
    f(nrcif(nr));
    return 0;
}
