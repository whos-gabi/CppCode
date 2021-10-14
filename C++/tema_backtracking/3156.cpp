#include <iostream>
#include <fstream>

using namespace std;

int n , a[11] , x[11] , p[11] , indm , indM , mini = 999999999 , maxi , c[11] , cnt;

int afisare()
{
    int pp = 1;
    for(int i = 1 ; i <= n ; i++)
        if(i == indm || i == indM) cout << a[i] << " ";
        else cout << c[x[pp]] << " " , pp++;
    cout << '\n';
}

void back(int k)
{
    for(int i = 1 ; i <= cnt ; i++)
        if(!p[i])
        {
            x[k] = i;
            p[i] = 1;
                if(k == cnt) afisare();
                else back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    for(int i = 1 ; i <= n ; i++)
    {
        if(a[i] < mini) mini = a[i] , indm = i;
        if(a[i] > maxi) maxi = a[i] , indM = i;
    }
    for(int i = 1 ; i <= n ; i++)
        if(i != indm && i != indM) c[++cnt] = a[i];
    sort(c + 1 , c + cnt + 1);
    back(1);
}