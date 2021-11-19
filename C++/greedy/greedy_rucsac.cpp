#include <iostream>
#include <fstream>

using namespace std;
/**
 * intr-un rucsac se pot transporta maxim
 * G - kg
 * n - nr de obiecte
 * gi
 * vi
 * 
 * G = 20 
 * obiectul  gi  vi  ef
 *    1       5  10  2
 *    2       4  20  5
 *    3       4  10  2,5
 *    4       8  10  1,25
 *    5      10  22  2,2
 **/

ifstream f("greedy2.in");
ofstream g("greedy2.out");

int nr_obiecte, i, gr_rucs,sol[100];
float cant[100];
//declararea obiectului
struct obiect
{
    //ef-eficienta
    //gi-greutatea
    //vi-valoarea
    int gi, ef, vi;
    int id;
} v[100],aux;

void citire()
{
    f >> nr_obiecte >> gr_rucs;
    for (int i = 1; i <= nr_obiecte; i++)
    {
        f >> v[i].gi >> v[i].vi;
        v[i].id = i;
        //ecuatia eficientei
        v[i].ef = v[i].vi / v[i].gi;
    }
}

void ordonare()
{
    int aux = 0;
    for (int j = 1; j <= nr_obiecte - 1; j++)
    {
        for (int i = j + 1; i <= nr_obiecte; i++)
        {
            /* conditia de sortarea dupa eficienta (DESCRESCATOR) */
            if (v[i].ef > v[j].ef)
            {
                //swap(v[i],v[j]);
                aux = v[j].ef;
                v[j].ef = v[i].ef;
                v[i].ef = aux;
                //
            }
        }
    }
}

void afisare(int j)
{
    /* afisarea rezulatelor */
    cout << "n"
      << " | "
      << "eficienta" << ' ' << "greutatea" << ' ' << "valoarea\n";

    for (int i = 1; i <= j; i++)
    {
        cout << v[sol[i]].id << " | " << " in cant = " << v[sol[i]].gi << " * " <<cant[sol[i]]<<" = "<< v[sol[i]].gi * cant[sol[i]]<<" | eficienta: "<< v[sol[i]].ef << '\n';
    }
    //v[sol[i]] - sol[i] returneaza id ul obiectului 
}

void greedy()
{
    int i = 1, j = 0;
    while (gr_rucs && i <= nr_obiecte)
    {
        //verif daca obiectul incape in rucsac
        if (v[i].gi <= gr_rucs)
        {
            //inregistrarea solutiti in vectorul de solutii
            sol[++j] = i;
            //
            cant[i] = 1;
            //scad greutatea obiectului din ghiozdan
            gr_rucs -= v[i++].gi;
        }
        else
        {
            //inregistrarea solutiti in vectorul de solutii
            sol[++j] = i;
            //
            cant[j] = gr_rucs / v[i++].gi;
            //
            gr_rucs = 0;
        }
    }
    afisare(j);
}

int main()
{
    citire();
    ordonare();
    greedy();
    // afisare();


    return 0;
}
