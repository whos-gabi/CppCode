#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int v[100],n=0,x,i,j,aux;
ifstream f("NR.txt");
while(f>>x)
{
    if(x>0) // Pun in vector doar numerele naturale
    {
        v[n]=x;
        n=n+1;
    }
}
if(n==0) // Daca n=0 inseamna ca n-a fost gasit niciun numar natural
    cout<<"nu exista";
else
    for(i=0;i<n-1;i++) // Sortez vectorul
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
for(i=0;i<=n-1;i++) // Afisez vectorul
	cout<<v[i]<<' ';
return 0;
}
