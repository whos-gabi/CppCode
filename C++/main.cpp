#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

/*
La un depozit exista n produse pentru fiecare produs se cunoaste:
codul, denumirea, cantitatea si pretul.
Sa se calculeze valarea toatala a produselor din depozit
*/

struct depozit{
    long cod;
    int cantitate, pret;
    char denumire[41]; 
};

depozit v[1001];
int n,nr;

void citire(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i].cod;
        cin>>v[i].cantitate;
        cin>>v[i].pret;
        cin.get();
        cin.get(v[i].denumire,41);
    }
}

void valTot(int &nr, depozit v[1001], int n){
    nr=0;
    for(int j=0;j<n;j++)
        nr+=(v[j].pret*v[j].cantitate);
}

int main(){
    citire();
    valTot(nr,v,n);
    cout<<"Valoarea totala = "<<nr;
    return 0;
}