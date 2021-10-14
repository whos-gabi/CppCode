#include <iostream>
using namespace std;
//forma generala a problemei de tip backtracking
void backt(){
    k=1;
    x[k]=valoarea initiala;
    do{
        while(x[k]<dom de valori){
            x[k]++;
            if(cond(k)){
                if(k==dimensiune finala){
                    afisare();
                }else{
                    k++;
                    x[k]=valoare initiala;
                }
            }
        }
        k--;
    }while(k>0);
}


int main()
{
    
        return 0;
}