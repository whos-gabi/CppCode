#include <iostream>

using namespace std;

struct Nod
{
    int value;
    Nod *next;
};
int sz = 0;

void addEnd(Nod *&start, Nod *&end, int val)
{
    Nod *x = new Nod;
    x->value = val;
    x->next = NULL;
    if (end == NULL)
    {
        end = x;
        start = end;
    }
    else
    {
        end->next = x;
        end = x;
    }
    sz++;
}
void afisare(Nod *start)
{
    Nod *p = start;
    while (p != NULL)
    {
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
}

void reverseNodArr(Nod *&start, Nod *&end)
{
    Nod *p = start;
    Nod *prev = NULL;
    Nod *next = NULL;
    while (p != NULL)
    {
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
    start = prev;
}

int main(){
    Nod *start = NULL, *end = NULL;
    for (int i = 1; i <= 10; i++)
    {
        addEnd(start, end, i);
    }
    afisare(start);
    reverseNodArr(start, end);
    afisare(start);

    
    
    
    return 0;
}