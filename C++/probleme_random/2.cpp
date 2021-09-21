#include <iostream>

using namespace std;
int n,mini=0,maxi=0,c,cif;

int main()
{
    cin>>n;
    c=n;
    mini=maxi=c%10;
    
    while (c > 0)
    {
        cif=c%10;

        if(cif>maxi){
            maxi=cif;
        }

         if(cif<mini){
            mini=cif;
        }

        c = c / 10;
    }
    cout<<mini<<'\n'<<maxi;

    return 0;
}