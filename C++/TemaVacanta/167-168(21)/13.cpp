#include <bits/stdc++.h>
//
using namespace std;
//
//citire patrice arbitrara
//verificare liliile coloanele cu nr pare
//afisarea lor
int n, m, v[1001][1001];
bool p;

void citire()
{
    //v[n][m]
    cout<<"citire dimensiuni matrice: ";
    cin >> n >> m;
    cout<<"citire matrice: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}

/*
ij 
  1  2  3
  1  2  3 
  1  2  3

*/
bool par(int k)
{
    if (k % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool colPar(int n,int j){
    for (int i = 0; i <=n; i++)
    {
        if(!par(v[i][j])){
            return 0;
        }
    }
    return 1;
}

bool rowPar(int m,int j){
    for (int i = 0; i <=m; i++)
    {
        if(!par(v[j][i])){
            return 0;
        }
    }
    return 1;
}

void prelucrare()
{   
    cout<<"\nPe randuri:\n";
    //pe randuri
    for (int i = 0; i < n; i++)
    {
        if (rowPar(m,i))
        {
            for (int j = 0; j <=n; j++)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }

    cout<<"\nPe coloane:\n";
    //merge pe coloane
    for (int i = 0; i < m-1; i++)
    {
        if (colPar(n,i))
        {
            for (int j = 0; j < m; j++)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }

}

int main()
{

    citire();
    prelucrare();

    return 0;
}