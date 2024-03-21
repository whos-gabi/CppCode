#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

char s[256], t[256] = "";
char pre[101][101] = {"fam", "gen", "spe", "xxx", '\0'};
ifstream fin("input.txt");
// fam. PHASIANIDAE gen. MELEAGRIS spe. GALLOPAVO

void citire()
{
    fin.getline(s, 100);
}
int verifPrefix(int j)
{

    switch (s[j])
    {
    case 'F':
        // return "fam";
        return 0;
        break;
    case 'G':
        // return "gen";
        return 1;
        break;
    case 'S':
        // return "spe";
        return 2;
        break;

    default:
        // return "xxx";
        return 3;
        break;
    }
}

void prel()
{
    int i = 0, p = 0;
    while (s[i] != '\0')
    {
        // cout << s[i] << " ";
        // daca urmeaza
        if (s[i] == '.')
        {
            // verifica apartenenta la una dintre specii
            if (verifPrefix(p) != 3)
            {
                // inlocuieste cu primele 3 char din sppecie (tolower)
                // cout << pre[verifPrefix(p)] << " ";
                strcat(t, pre[verifPrefix(p)]);
                strcat(t, ".");
                p = i + 1;
            }
        }
        else if (s[i] == ' ')
        {
            strcat(t, " ");
            p = i + 1;
        }
        else
        {
            
            strncat(t, &s[i], 1);

        }
        i++;
        hui="";
    }
}

int main()
{
    citire();
    prel();
    cout << t;
    // cout << " " << p[0];

    return 0;
}