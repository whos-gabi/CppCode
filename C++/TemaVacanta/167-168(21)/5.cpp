#include <bits/stdc++.h>
//
using namespace std;
//
//daca s2 este sufix sau prefix al sirului s1

char sir1[256], sir2[256];

void citire()
{
    cin.get(sir1, 256);
    cin.get();
    cin.get(sir2, 256);
}

bool checkPrefix(char s1[],char s2[]){

	if(s1[0]==s2[0]&&s1[strlen(s1)]==s2[strlen(s1)]){
        return 1;
	}else{
        return 0;
    }

}

bool checkSufix(char s1[],char s2[]){

	if(s1[strlen(s1)]==s2[strlen(s2)]&&s2[0]==s1[strlen(s1)-strlen(s2)]){
        return 1;
	}else{
        return 0;
    }
    //FIXME:nu lucreaza algoritmul
}


int main()
{

	citire();
    cout << "Size off arrays: " << endl;
    if(checkPrefix(sir1,sir2)){
        cout<<"Are prefix";
    }else if(checkSufix(sir1,sir2)){
        cout<<"Are sufix";
    }


    return 0;
}