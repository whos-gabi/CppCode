//Sarcina individuala nr7
#include <bits/stdc++.h>
using namespace std;
//2+5+8+11+...+(3*n-1)
int n,s=0;

void citire(){
cin>>n;
}

void prelucrare(){
    for (int i = 2; i <=n; i+=3)
    {
        if(i==3*n-1){
            s=s+3;
            break;
        }else{
            s=s+3;
        }
    }
    cout<<s;
}

int main()
{
    citire();
    prelucrare();
    return 0;
}
