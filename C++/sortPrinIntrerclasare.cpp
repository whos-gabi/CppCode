#include <bits/stdc++.h>
using namespace std;
int k,a[101],n,m,i,j;

void citire()
{   cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
}

void divide(int st,int dr,int &mij)
{
    mij=(st+dr)/2;
}

void interclasare (int a[],int n,int st,int dr,int mij)
{
    int i=st;j=mij+1;
    int k=0;
    int c[101];
    while(i<=mij and j<=dr)
        if(a[i]<a[j])
            c[++k]=a[i++];
        else
            c[++k]=a[j++];
    while(i<=mij)
        c[++k]=a[i++];
    while(j<=dr)
        c[++k]=a[j++];
    for(int k=1,i=st;i<=dr;k++,i++)
        a[i]=c[k];
}

void MergeSort(int st,int dr)
{
    int mij;
    if(st<dr)
    {
        divide(st,dr,mij);
        MergeSort(st,mij);
        MergeSort(mij+1,dr);
        interclasare(a,n,st,dr,mij);
    }
}
void afisare()
{
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    citire();
    MergeSort(1,n);
    afisare();
    return 0;
}