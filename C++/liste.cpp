/**

 IMPLEMENTAREA LISTELOR IN C++
metode de implementare:
1. statica (folosind vectori)
2. dinamica (folosind pointeri)

Diferenta esentiala intre alocarea statica si cea
dinamica este aceea ca in alocare statica
odata rezervata zona de memorie variabilelor din program
ramane alocata pe tot parcursul executiei programului
(fara posibilitatea de eliberare a memoriei),
in timp ce in alocarea dinamica, variabilelor
li se aloca zona de memorie in timpul executiei programului
si mai mult decat atat se poate elibera zona de memorie
daca nu mai e nevoie pentru anumite variabile

Lista dinamica o definim ca un ansamblu de noduri.
Fiecare nod este un element de tip struct deoarece
avem cel putin 2 tipuri de date:
- unul de informatie
- si celalalt de legatura

Accesul la partea de info: pointer -> info
Accesul la partea de legatura: pointer->adresa

Crearea unui nod din lista:
1. se rezerva memorie nodului: NEW( pointer)
2. se da partea de informatie
3. se realizeza partea de legatura

**/
#include <iostream>

using namespace std;
struct nod
{
    int info;
    nod *urm;
};
nod *prim, *ultim, *p;
int n;
void creare_dupa()
{
    prim = ultim = new nod;
    p = prim;
    cout << "inf din primul nod ";
    cin >> prim->info;
    prim->urm = NULL;
    while (prim->info != 0)
    {
        ultim = new nod;
        cout << "inf din urmatorul nod ";
        cin >> ultim->info;
        prim->urm = ultim;
        prim = ultim;
    }
    ultim->urm = NULL;
}
void afisare()
{
    prim = p;
    while (prim->urm != NULL)
    {
        cout << prim->info << " ";
        prim = prim->urm;
    }
}
int main()
{
    creare_dupa();
    afisare();
}