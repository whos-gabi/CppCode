#include <bits/stdc++.h>
//
using namespace std;
//
// un text este cuvant dau nu
char cuv[255]; 

bool test(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if(strchr("0123456789",a[i])){
            return 0;
        }
    }
    return 1;
}


int main()
{
    cin.get(cuv, 255);
    cout<<test(cuv);
    return 0;
}