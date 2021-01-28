#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;
//d
char s[251]="texttestidkitssus", ch='t';

/*
returnează cea mai din stânga 
poziție unde se găsește ch în șir, 
sau returnează -1 dacă ch nu apare în șir.
*/
int IndexOf(char s[], char ch){
    if(!strchr(s,ch)){
        return -1;
    }
    int x=strlen(s);
    for(int i=0;i<=x;i++){
        if(s[i]==ch){
            return i;
        }
    }
    return -1;
}
/*
returnează cea mai din dreapta poziție
 unde se găsește ch în șir, 
 sau returnează -1 dacă ch nu apare în șir.
*/
int LastIndexOf(char s[], char ch){
    if(!strchr(s,ch)){
        return -1;
    }
    int x=strlen(s),k=0;
    for(int i=x;i>=0;i--){
        k++;
        if(s[i]==ch){
            return k;
        }
    }
    return -1;
}
/*
1 ≤ k ≤ n, funcția returnează poziția 
unde caracterul ch apare a k-a oară.
 În caz contrar, funcția returnează -1.
*/
int NthIndex(char s[], char ch, int k){
    if(!strchr(s,ch)){
        return -1;
    }
    int x=strlen(s);
    for(int i=0;i<=x;i++){
        if(s[i]==ch && k==i){
            return i;
        }else{
            return -1;
        }  
    }
    return -1;
}

int main(){
    //test 
    cout<<NthIndex(s,ch,60)<<'\n';
    cout<<LastIndexOf("okokokqwer",'k')<<'\n';
    cout<<IndexOf("justtest",'t')<<'\n';
    return 0;
}