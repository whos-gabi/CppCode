#include <iostream>
using namespace std;

/*
void add3(int a){
    a += 3;
    cout << a << endl;
}

   int a = 3;
    add3(a);
    cout << a << endl;

*/
int a=99999;
// int *p = &a;
int *p;

void add3(const int &a){
    int b=a;
    //a+=3 wrong
    cout << b+3;
}

int main(){
    p = new int[4];

    cout << &p << endl;
    cout << p << endl;
    cout << *p << endl;

    // delete[] p;


    
    return 0;
}