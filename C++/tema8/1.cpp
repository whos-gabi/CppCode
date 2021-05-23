//Lucrare practică № 1
/*Scrieţi un program care citeşte un text introdus de la tastatură, ordonează alfabetic liniile
acestuia şi le afişează.*/
#include <bits/stdc++.h>
using namespace std;

char nume[1001][1001], temp[1001];
int n;

void citire()
{
    cout << "Introduceti nr de cuvinte: ";
    cin >> n;
    cout << '\n';
    for (int i = 0; i <= n; i++)
    {
        cin.getline(nume[i], 1000);
    }
}

void afisare(){

    cout<<"\nAfisare:\n";
    for (int i = 0; i <=n; i++)
    {
        cout<<nume[i]<<'\n';
    }
    
}

void ordonare(){
    for(int i=0;i<=n;i++)
        for(int j=i+1;j<=n;j++)
        {
            if(strcmp(nume[i],nume[j])>0)
            {
                strcpy(temp,nume[i]);
                strcpy(nume[i],nume[j]);
                strcpy(nume[j],temp);
            }
        }
}

void prelucrare()
{
    ordonare();
    afisare();
}

int main()
{
    citire();
    prelucrare();
    return 0;
}