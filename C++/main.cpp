#include <bits/stdc++.h>
//
using namespace std;
//
bool multiplu(){
return (a[i]%k==0 && a[i]%10==k)?true:false;
}
int multiplu(int a[] , int n , int k)
{
    int f=0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(multiplu())
            f++;
    }
    return f;
}
int main()
{
    citire();
    P(n,x[101],s);
    cout<<s;
    return 0;
}