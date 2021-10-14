#include <iostream>
#include <fstream>

using namespace std;

ifstream cini("anagrame1.in");
ofstream couti("anagrame1.out");

int n , x[10] , p[10] , a[10];
char s[10];

void afisare()
{
    for(int i = 1 ; i <= n ; i++)
        couti << s[x[i]];
    couti << '\n';
}

void back(int k)///k = poz la care am ajuns
{
    for(int i = 0 ; i < n ; i++)///de unde se ia x[k]
        if(!p[i]) ///daca nu e pus anterior
        {
            x[k] = i;///pun elementul
            p[i] = 1;///l am folosit pe i
            if(k == n) afisare();///solutie
            else back(k + 1);///trec la poz urmatoare
            p[i] = 0;///marchez ca nefolosit
        }
}

int main()
{
    cini >> s;
    n = strlen(s);
    for(int i = 0 ; i < n ; ++i)
        for(int j = i + 1 ; j < n ; j++)
            if(s[i] > s[j])
            {
                char aux = s[i];
                s[i] = s[j];
                s[j] = aux;
            }
    back(1);
    return 0;
}