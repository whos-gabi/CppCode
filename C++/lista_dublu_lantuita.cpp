#include <iostream>

using namespace std;
struct nod
{
    int info;
    nod *urm, *ant;
};

nod *p, *u, *prim, *ultim;
int n;

void creare()
{
    p = new nod;
    prim = p;
    cout << "inf din primul nod ";
    cin >> p->info;
    p->ant = NULL;
    p->urm = NULL;

    while (p->info != 0)
    {
        u = new nod;
        cout << "inf din urmatorul nod ";
        cin >> u->info;
        p->urm = u;
        u->ant = p;
        p = u;
    }
    u->urm = NULL;
}

void afisare_sd()
{
    p = prim;
    while (p->urm != NULL)
    {
        cout << p->info << " ";
        p = p->urm;
    }
}

void afisare_ds(){
       p = u->ant;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->ant;
    } 
}

int main()
{
    creare();

    afisare_ds();
    cout<<"\n";
    afisare_sd();
}