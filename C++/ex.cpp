#include <iostream>
#include <math.h>

using namespace std;

//declarare
int a, b, c, x1, x2;

void citire()
{
    cin >> a >> b >> c;
}

void aflarex1x2(int a, int b, int c)
{
    //aflam delta
    int delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "Ecuatia nu are solutie în Z \n";
    }
    else
    { //aflam x1 si x2
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    }
}

int aria(int a, int b, int c)
{
    int s = (a + b + c) / 2;
    //formula lui heron
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void checkTriunghi(int a, int b, int c)
{
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        // p = (a + b + c) / 2;
        // cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
        if (a == b && b == c)
        {
            cout << "echilateral";
            cout << "\nAria este: " << aria(a, b, c);
        }
        if (a == b || b == c || a == c)
        {
            if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
            {
                cout << "dreptunghic isoscel";
                cout << "\nAria este: " << aria(a, b, c);
            }
            else
            {
                cout << "isoscel";
                cout << "\nAria este: " << aria(a, b, c);
            }
        }
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
        {
            cout << "dreptunghic";
            cout << "\nAria este: " << aria(a, b, c);
        }
        else
        {
            cout << "arbitrar";

            cout << "\nAria este: " << aria(a, b, c);
        }
    }
    else
    {
        cout << "datele introduse nu pot forma un triunghi\n";
    }
}

int main()
{
    //se citeste nr
    citire();
    aflarex1x2(a, b, c);
    checkTriunghi(a, b, c);

    return 0;
}