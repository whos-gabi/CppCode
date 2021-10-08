#include <iostream>
#include <fstream>
using namespace std;

/*
Fişierului text NR.TXT conţine pe o singură linie,
 separate prin câte un singur spaţiu, cel mult 100 de numere naturale, 
 fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++ care citeşte 
 \toate numerele din fişierul NR.TXT şi afişează pe ecran, separate prin 
 câte un spaţiu, în ordine crescătoare, toate numerele din fişier care au 
 cel puţin 3 cifre. Dacă fişierul nu conţine astfel de numere se va afişa pe 
 ecran mesajul NU EXISTA. (10p.)
*/
int v[101],k=3,nr=0,i;
ifstream f("NR.txt");

void citire(){
    while (f>>v[i])
    {

    f>>v[i];

    }
    
}

int main()
{
    
    return 0;
}