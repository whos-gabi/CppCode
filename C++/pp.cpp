#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

struct FirstMeal{
    float price;
    string name;
    string getName(){
        return name;
    }
    float getPrice(){
        return price;
    }
    int getID(){
        return id;
    }
    private:
        int id=129372;
};

struct SecondMeal{
    float price;
    string name;
    string getName(){
        return name;
    }
    float getPrice(){
        return price;
    }
    int getID(){
        return id;
    }
    private:
        int id=184572;
};

struct Drink{
    float price;
    string name;
    string getName(){
        return name;
    }
    float getPrice(){
        return price;
    }
    int getID(){
        return id;
    }
    private:
        int id=822573;
};

struct McMeal{
    struct FirstMeal burger;
    struct SecondMeal sauce;
    struct Drink drink;
}meal;

int checkID(int id){
    return id;
}

int main(){
    meal.burger.price = 12.5;
    cout<< meal.burger.price<<'\n';
    cout<< meal.burger.getID()<<endl;
    return 0;
}