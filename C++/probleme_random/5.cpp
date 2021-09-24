#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

/*
SA DA SIR DE CHAR DE CEL MULT 200,
sa se form un sir de cuv din sirul dat
sa se afiseze doar cuv cu nr maxim de vocale

*/

//var
char a[51][81], s[201], sep[]=" !;?/.,-_", *p;

void citire(){
    cin.getline(s, 256);
}

void afis(){
    for(int i=1; i<=n; i++)
    cout<<a[i];
}

void alg(char s[],char a[][81],int &n){
    int n=0;
    *p = strtok(s, sep);
    while (p!=NULL)
    {
        //introducerea in sir
        strcpy(a[++n],p);
        //starge datele din pointer
        p = strtok(NULL, " ");
    }

}

int main(){
    citire();
    alg(s,a,n);
    afis();

    return 0;
}