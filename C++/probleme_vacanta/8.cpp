#include <iostream>

using namespace std;

//function
bool prel(int n)
{
    return n >= 1 && n<= 100 ? 1 : 0;  
}

int main()
{
    int n;
    cin>>n;
    cout<<prel(n)?"YES":"NO";
    return 0;
}