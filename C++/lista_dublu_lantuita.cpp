//lista dublu lantuita
#include <iostream>

using namespace std;
struct nod
{
    int info;
    nod *urm, *ant;
};

nod *p, *u, *prim, *ultim, *q;
int n, x;

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

void stergere()
{
    p = prim;
    cout << "nodul spre stergere: ";
    cin >> x;
    if (p->info == x)
    {
        q = p;
        p = p->urm;
        prim = p;
        delete (q);
    }else{
        while(p->urm->info!=0){
            p=p->urm;
        }
        q=p->urm;
        p->urm=q->urm;
        q->urm->ant=p;
        delete(q);
    }
}

void inserare(){
    p=prim;
    cout<<"Dati nodul dupa care se face inserarea: ";
    cin>>x;
    while(p->info!=x){
        p=p->urm;
    }
    q= new nod;
    cout<<"Dati informatia noului nod: ";
    cin>>q->info;
    q->urm=p->urm;
    p->urm->ant=q;
    p->urm=q;
    q->ant=p;
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

void afisare_ds()
{
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

    // afisare_ds();
    // cout << "\n";
    afisare_sd();
    inserare();
    cout<<'\n';
    afisare_sd();

}