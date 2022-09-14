#include <iostream>
#include <cstring>
//
using namespace std;
//
char a[1001];
int m,n,x,y;

int main()
{

    cin >> m >> n;
    x=1;
    while (x == 1)
    {
        x = m;
        y = n;
        n = n - 1;
        while (x != y)
        {
            if (x > y)
            {
                x = x - y;
            }
            else
            {
                y = y - x;
            }
        }
    }
    cout<<n+1;

    return 0;
}