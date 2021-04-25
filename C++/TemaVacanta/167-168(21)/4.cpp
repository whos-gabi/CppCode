#include <bits/stdc++.h>
//
using namespace std;
//
// citirea si intercalarea a 2 siruri (si in ce pozitii)

char sir1[256], sir2[256];

void citire()
{
    cin.get(sir1, 256);
    cin.get();
    cin.get(sir2, 256);
}

int  howMany(char a1[], char a2[])
{
    //how many times a1 in a1
    //FIXME: nu lucreaza
    int k;
    for (int i = 0; i < strlen(a2); i++)
    {
        if(i+strlen(a2) > strlen(a2)){
            return k;
        }
        if(a1[0]==a2[i]){
            if(a1[strlen(a1)]==a2[i+strlen(a2)]){
                k++;
            }
        }
    }
    return k;
}

int deCateOriApare(char a1[], char a2[])
{
    int f;
    if (strstr(a1, a2))
    {
        //FIXME
        return howMany(a1,a1);
    }
    else
    {
        return -1;
    }
}

int main()
{
    citire();

    // for( int i = 0 ; i < strlen(sir1) ; i ++ ){
    // 	cout << sir1[i];
    // }
    // cout << endl;

    // for( int i = 0 ; i < strlen(sir2) ; i ++ ){
    // 	cout << sir2[i];
    // }

    cout << "Apare de: " << deCateOriApare(sir1, sir2);

    return 0;
}