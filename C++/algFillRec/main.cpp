#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
/*Algoritmul fill (nu se cere la bac)*/
using namespace std;

//declaram fisierele de intrare-iesire
ifstream f("fill.in");
ofstream g("fill.out");
//declaram matricea (harta)
int a[102][102];
int n, m, nr;
//coordonate de miscare
int dl[] = {0, 1, 0, -1};
int dc[] = {-1, 0, 1, 0};
/**
0 0 0 0 0 0 l=1,c=1
0 0 0 0 0 0 k=0 ll=1+0=1; cc=1+(-1)=0
0 0 0 0 0 0 k=1 ll=1+1=2; cc=1+0=1
0 0 0 1 1 1 k=2 ll=1+0=1; cc=1+1=2
k=3 ----------------

 l=1,c=2
k=0 ll=1+0=1; cc=2+(-1)=1
k=1 ll=1+1=2; cc=2+0=2
k=2 ll=1+0=1; cc=2+1=3
k=3------------------

l=1,c=3
k=0 ll=1+0=1; cc=3+(-1)=2
...............
**/
void fill(int l, int c)
{   //ll = linie, cc= coloana
    int ll, cc;
    //functia fill umple tot "teritoriul" cu 0
    a[l][c] = 0;
    //functia merge in toate directiile posibile
    //si se reapeleaza, eventual umple tot "teritoriul" cu 0 
    for (int k = 0; k <= 3; k++)
    {   
        //seteaza linia si coloana curenta sa fie egala 
        //cu un teritoriu din apropiere
        /* 
            1
          1 0 1
            1        
        */ 
        ll = l + dl[k];
        cc = c + dc[k];

        if (a[ll][cc])
            fill(ll, cc);//partea recursiva
    }
}

int main()
{
    f >> n >> m;
    // citirea coloanelor si randurilor matricei
    
    int i, j;
    //for-ul citeste matricea 
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            f >> a[i][j];
    /* 
    Aici for-ul merge pe fiecare element pana 
    nu gaseste 1 apoi ii da fill si numara 
    "continentele". 
    */
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (a[i][j])
            {
                nr++;
                fill(i, j);
            }
    // se scrie nr in fisier si se inchide fisierul            
    g << nr;
    g.close();
    
    return 0;
}