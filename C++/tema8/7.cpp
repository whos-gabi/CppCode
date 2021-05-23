//Sarcina individuala nr6
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

/*
(3^n)/(3n)!
*/
int n;
void citire(){
cin>>n;
}

int fact(int n){
    //
    int fact;
    for(int i = 1; i <=n; ++i) {
            fact *= i;
    }
    return fact;
}

void afisare(double s,double j){
    cout<<s/j;
}

void prelucrare(){
    double s,j;
    s=pow(3,n);
    j=fact(3*n);
    afisare(s,j);
}

int main()
{
    citire();
    prelucrare();
    return 0;
}
