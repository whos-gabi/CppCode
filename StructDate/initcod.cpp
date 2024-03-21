#include <iostream>

using namespace std;

struct Nod
{
    int value;
    Nod *next;
};
int sz = 0;

// adauga la final de lista
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

void adPosition(Nod *&start, Nod *&end, int pos, int val)
{
    if (pos < 1 || pos > sz + 1)
    {
        cout << "Pozitie invalida\n";
    }
    else
    {
        if (pos == 1)
        {
            // addBegin(start, end, val);
        }
        else
        {
            if (pos == sz + 1)
            {
                addEnd(start, end, val);
            }
            else
            {
                Nod *st = start;
                for (int i = 1; i < pos - 1; i++)
                {
                    st = st->next;
                }
                Nod *dr = st->next;
                Nod *x = new Nod;
                x->value = val;
                st->next = x;
                x->next = dr;
                sz++;
            }
        }
    }
}

int main()
{
    // test addEnd
    Nod *start = NULL;
    Nod *end = NULL;
    for (int i = 1; i <= 10; i++)
    {
        addEnd(start, end, i);
    }
    afisare(start);

    // test adPosition
    adPosition(start, end, 5, 100);
    afisare(start);

    

    return 0;
}
