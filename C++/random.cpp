#include <iostream>
#include <random>

using namespace std;



int random(int min, int max)
{
    return min + rand() % (max - min + 1);
}


//call the random function to generatoe random nr between 1 and 12
int main()
{
    int min = 1;
    int max = 12;
    int randomNumber = random(min, max);
    cout << "Random number between " << min << " and " << max << " is " << randomNumber << endl;
    return 0;
}
