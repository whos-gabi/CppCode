#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;
/*
@theCYBERbro
FizzBuzz 
*/

int main()
{
    // Print numbers from 1 to 100
    for (int i = 1; i < 101; i++)
    {
        // Check to see if's both divisable by 3 and 5
        if (i % 15 == 0)
        {
            cout << "FizzBuzz\n";
        }
        // Check to see if it's divisable by 3
        else if (i % 3 == 0)
        {
            cout << "Fizz\n";
        }
        // Check to see if it's divisable by 5
        else if (i % 5 == 0)
        {
            cout << "Buzz\n";
        }
        else
            // Print out the rest of the numbers from 1 to 100
            cout << i << '\n';
    }
}