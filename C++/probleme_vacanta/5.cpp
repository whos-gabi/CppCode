#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int nr, big, flag = 0;

int par(int k)
{
    return k % 2 == 0;
}

int main()
{
    cin >> nr;
    int n = nr, uc;
    while (n != 0)
    {
        uc = n % 10;
        if (par(uc))
        {
            flag++;
            if (uc > big)
            {
                big = uc;
            }
        }
        n /= 10;
    }
    if (flag==0)
    {
        cout << "10";
    }
    else
    {
        cout << big;
    }
    return 0;
}

/*
better soution 
#include<iostream>

using namespace std;

int main(){
   int n, c=-1;
   cin>>n;
   do{
       if(n%10>c&&n%10%2==0)
           c=n%10;
       n/=10;
   }while(n!=0);
   if(c==-1)
       cout<<10;
   else
       cout<<c;
   return 0;
}

*/