//Lucrare practică № 8
/*De afișat lista studenților în ordinea crescătoare a anului de naștere*/
//struct elem
/*
-FNP
-anul
-ziua
-luna nasterii
-anul de studii
-anul inmatricularii la colegiu
-semestrul 
-notele pe fiecare semestru
*/
#include <bits/stdc++.h>
using namespace std;

struct elev
{
    char numele[40], prenumele[40];
    int anul_nasterii, ziua_nasterii, anul_de_studii, anul_inm, sem, noteS1[26], noteS2[26];
};

elev student[101];
int nr; //nr elevi

void citire()
{
    cin >> nr;
    for (int i = 0; i < nr; i++)
    {
        cin >> student[i].anul_nasterii;
    }
}

void afisare(){
    for (int  i = 0; i <nr; i++)
    {
        cout<<student[i].anul_nasterii<<'\n';
    }
    
}

void prelucrare()
{
    int tmp = 0;
    for (int i = 0; i <= nr - 2; i++)
    {
        for (int j = i + 1; j <= nr - 1; j++)
        {
            if (student[i].anul_nasterii > student[j].anul_nasterii)
            {
                tmp = student[i].anul_nasterii;
                student[i].anul_nasterii = student[j].anul_nasterii;
                student[j].anul_nasterii = tmp;
            }
        }
    }
    afisare();
}

int main()
{
    citire();
    prelucrare();
    return 0;
}
