#include <iostream>
using namespace std;

int x[10] , n , p;

void Afis(int k)
{
    for(int j = 1 ; j <= k ; j ++)
        cout << x[j] << " ";
    cout << endl;
}

bool OK(int k){
    for(int i = 1 ; i < k ; ++ i)
        if(x[k] == x[i])
            return false;
    if(k > 1)
        if(x[k] <= x[k-1])
            return false;
    return true;
}

bool Solutie(int k)
{
    return k == p;
}

void back(int k){
    for(int i = 1 ; i <= n ; ++ i)
    {
        x[k] = i;
        if(OK(k))
            if(Solutie(k))
                Afis(k);
            else
                back(k + 1);
    }
}
int main(){
    cin >> n >> p;
    back(1);
    return 0;
}