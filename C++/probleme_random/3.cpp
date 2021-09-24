#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

/*
🚫
se da un sir de cuv:
sa se afiseze doar cuv palindromice 
sa se calculeze si nr lor
*/

char txt[256];

void citire()
{
    cin.getline(txt, 256);
}

bool palindrom(char cuv[256], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (cuv[i] != cuv[len - i - 1])
            return 0;

        return 1;
    }
}

void alg()
{
    // declarare bool ok si var de lungime
    int ok = 1, len;
    //include primul cuvand in pointer
    char *p = strtok(txt, " ");
    while (p)
    {
        ok = 1;
        //lungimea cuvantului
        len = strlen(p);
        //iterarea pana la jumate de cuvant pentru a testa palindromul
        for (int i = 0; i < len / 2; i++)
        {

            if (p[i] != p[len - i - 1])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            //afisarea palindromului
            cout << p << endl;
        }

        //starge datele din pointer
        p = strtok(NULL, " ");
    }
}

int main()
{
    citire();
    alg();

    return 0;
}