//Sarcina individuala nr3
#include <bits/stdc++.h>
using namespace std;
//de cate ori si-a serbat ziua in aceiasi zi in care s-a nascut
const int AN_CURENT = 2021;
int an, luna, zi;
int varsta, rs;

bool anBisect(int an)
{
    if (an % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void citire()
{
    cin >> an >> luna >> zi;
}

void afisare(){
    cout<<rs;
}

void prelucrare()
{
    varsta = AN_CURENT - an;
    if(anBisect(an)){
        rs=varsta/4;
    }else{
        rs=(varsta*3)/4;
    }
    afisare();
}

int main()
{
    citire();
    prelucrare();
    return 0;
}
