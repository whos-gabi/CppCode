//Sarcina individuala nr1
#include <bits/stdc++.h>
using namespace std;

//declaram fisierele de intrare-iesire
ifstream in1("IN1.txt");
ifstream in2("IN2.txt");
ofstream out("out.txt");

int s[1001], s1[1001], s2[1001];
int nr1, nr2;

void citire()
{
    in1 >> nr1;
    for (int i = 0; i < nr1; i++)
    {
        in1 >> s1[i];
    }

    in2 >> nr2;
    for (int i = 0; i < nr2; i++)
    {
        in2 >> s2[i];
    }
    //alaturarea sirurilor
    for (int i = 0; i < nr1; i++)
    {
        s[i] = s1[i];
    }
    for (int i = 0; i < nr2; i++)
    {
        s[i + nr1] = s2[i];
    }
}

void sortArr(int s[])
{
    int n=nr1+nr2, tmp;
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (s[i] > s[j])
            {
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
}

void prelucrare()
{
    sortArr(s);

    for (int i = 0; i < nr1 + nr2; i++)
    {
        out << s[i] << " ";
    }

    cout << "\n *Program terminat* \n";
   
}

int main()
{
    citire();
    prelucrare();
    return 0;
}
