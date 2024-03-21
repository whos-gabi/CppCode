#include <iostream>
#include <cstring>
using namespace std;
/*
Event Planning and Ticketing System - EPTS
g++ -o main main.cpp && ./main
*/
//---CLASSES---
// Location

class Location
{
    char *address;
    int capacity;
    int nrEvents;
    // Event *events;
public:
    // Default constructor
    Location()
    {
        this->address = new char[strlen("no address") + 1];
        strcpy(this->address, "no address");
        this->capacity = 0;
        this->nrEvents = 0;
    }
    /* Custom constructor */
    Location(const char *address, int capacity)
    {
        this->address = new char[strlen(address) + 1];
        strcpy(this->address, address);
        this->capacity = capacity;
        this->nrEvents = 0;
    }
    /* Full constructor */ 
    Location(const char *address, int capacity, int nrEvents)
    {
        this->address = new char[strlen(address) + 1];
        strcpy(this->address, address);
        this->capacity = capacity;
        this->nrEvents = nrEvents;
    }
    // Dopy constructor
    Location(const Location &l)
    {
        this->address = new char[strlen(l.address) + 1];
        strcpy(this->address, l.address);
        this->capacity = l.capacity;
        this->nrEvents = l.nrEvents;
    }
    // Destructor
    ~Location()
    {
        if (address != NULL)
        {
            delete[] address;
        }
    }
    //---SETTERS---
    void setAddress(const char *address)
    {
        if (this->address != NULL)
        {
            delete[] this->address;
        }
        this->address = new char[strlen(address) + 1];
        strcpy(this->address, address);
    }
    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }
    void setNrEvents(int nrEvents)
    {
        this->nrEvents = nrEvents;
    }
    //---GETTERS---
    char *getAddress()
    {
        return this->address;
    }
    int getCapacity()
    {
        return this->capacity;
    }
    int getNrEvents()
    {
        return this->nrEvents;
    }
    //---METHODS---
    void Afisare(string space = "\n")
    {
        cout << "Adresa: " << this->address << space;
        cout << "Capacitate: " << this->capacity << space;
        cout << "Numar evenimente: " << this->nrEvents << space;
    }
    // addEvent(Event event)
    // removeEvent(Event event)
    // getLocationDetails()

}; // end class Location

// Ticket
class Ticket
{
    // int id;
    string type;
    float price;
    char category; // A, B, C
    bool availability;

public:
    // default constructor
    Ticket()
    {
        type = "no type";
        price = 0;
        category = 'A';
        availability = false;
    }
    // full constructor
    Ticket(string type, float price, char category, bool availability)
    {
        this->type = type;
        this->price = price;
        this->category = category;
        this->availability = availability;
    }
    // copy constructor 
    Ticket(const Ticket &t)
    {
        this->type = t.type;
        this->price = t.price;
        this->category = t.category;
        this->availability = t.availability;
        //todo implement id increment and addition to event tickets
    }
    // Destructor
    ~Ticket()
    {
        //todo implement id decrement and removal from event tickets
        cout<<"Ticket deleted"<<endl;
    }
    //---SETTERS---
    void setType(string type)
    {
        this->type = type;
    }
    void setPrice(float price)
    {
        this->price = price;
    }
    void setCategory(char category)
    {
        this->category = category;
    }
    void setAvailability(bool availability)
    {
        this->availability = availability;
    }
    //---GETTERS---
    string getType()
    {
        return this->type;
    }
    float getPrice()
    {
        return this->price;
    }
    char getCategory()
    {
        return this->category;
    }
    bool getAvailability()
    {
        return this->availability;
    }
    //---METHODS---
    void Afisare(string space = "\n")
    {
        cout << "Tip: " << this->type << space;
        cout << "Pret: " << this->price << space;
        cout << "Categorie: " << this->category << space;
        cout << "Disponibilitate: " << this->availability << space;
    }
    
};

// Event
class Event
{
    string name;
    string date;
    int nrTickets;
    double rating;

public:
    // default constructor
    Event()
    {
        name = "no name";
        date = "01.01.1989";
        nrTickets = 0;
        rating = 5.0;
    }
    // custom constructor
    Event(string name, string date)
    {
        this->name = name;
        this->date = date;
        this->nrTickets = 0;
        this->rating = 5.0;
    }
    // full constructor
    Event(string name, string date, int nrTickets, double rating)
    {
        this->name = name;
        this->date = date;
        this->nrTickets = nrTickets;
        this->rating = rating;
    }
    // copy constructor
    Event(const Event &e)
    {
        this->name = e.name;
        this->date = e.date;
        this->nrTickets = e.nrTickets;
        this->rating = e.rating;
    }
    // Destructor
    ~Event()
    {
        cout<<"Event deleted"<<endl;
    }
    //---SETTERS---
    void setName(string name)
    {
        this->name = name;
    }
    void setDate(string date)
    {
        this->date = date;
    }
    void setNrTickets(int nrTickets)
    {
        this->nrTickets = nrTickets;
    }
    void setRating(double rating)
    {
        this->rating = rating;
    }
    //---GETTERS---
    string getName()
    {
        return this->name;
    }
    string getDate()
    {
        return this->date;
    }
    int getNrTickets()
    {
        return this->nrTickets;
    }
    double getRating()
    {
        return this->rating;
    }
    //---METHODS---


    // addTicket(Ticket ticket)
    // removeTicket(Ticket ticket)
    // getEventDetails()
};

// Attendee
class Attendee
{
    string name;
    int *age;
    double budget;
    // Ticket *tickets;

public:
    // default constructor
    Attendee()
    {
        name = "John Doe";
        age = new int(0);
        budget = 0;
        // tickets = NULL;
    }
    // full constructor
    Attendee(string name, int age, double budget)
    {
        this->name = name;
        this->age = new int(age);
        this->budget = budget;
        // this->tickets = tickets;
    }
    // copy constructor
    Attendee(const Attendee &a)
    {
        this->name = a.name;
        this->age = new int(*a.age);
        this->budget = a.budget;
    }
    // Destructor
    ~Attendee()
    {
        if (age != NULL)
        {
            delete age;
        }
    }
    //---SETTERS---
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        if (this->age != NULL)
        {
            delete this->age;
        }
        this->age = new int(age);
    }
    void setBudget(double budget)
    {
        this->budget = budget;
    }
    //---GETTERS---
    string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return *this->age;
    }
    double getBudget()
    {
        return this->budget;
    }
    //---METHODS---
    void Afisare(string space = "\n")
    {
        cout << "Nume: " << this->name << space;
        cout << "Varsta: " << *this->age << space;
        cout << "Buget: " << this->budget << space;
    }

};

int main()
{
    // TEST
    Location l1("Strada 1", 100, 0);
    l1.Afisare(" | ");
    cout << endl;
    Location l2("Strada 2", 200, 0);
    


    // END TEST

    return 0;
}