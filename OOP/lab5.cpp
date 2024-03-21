#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

class SalaCinema
{
private:
    // const int id;
    // static int idContor;
    char zona;
    char *numeSala;
    string managerSala;
    int nrLocuri;
    int *locuriOcupate;
    bool disponibilitate;

public:
    SalaCinema()
    {
        zona = 'x';
        numeSala = new char[strlen("anonim") + 1];
        strcpy(numeSala, "anonim");
        managerSala = "anonim";
        nrLocuri = 0;
        locuriOcupate = NULL;
        disponibilitate = false;
    }
    SalaCinema(char zona, char *numeSala, string managerSala, int nrLocuri, int *locuriOcupate, bool disponibilitate)
    {
        this->zona = zona;
        this->numeSala = new char[strlen(numeSala) + 1];
        strcpy(this->numeSala, numeSala);
        this->managerSala = managerSala;
        this->nrLocuri = nrLocuri;
        this->locuriOcupate = new int[nrLocuri + 1];
        for (int i = 0; i < nrLocuri; i++)
        {
            this->locuriOcupate[i] = locuriOcupate[i];
        }
        this->disponibilitate = disponibilitate;
    }
    void Afisare()
    {
       cout << "Zona: " << this->zona << endl;
       cout << "Nume sala: " << this->numeSala << endl;
       cout << "Manager sala: " << this->managerSala << endl;
       cout << "Numar locuri: " << this->nrLocuri << endl;
       for(int i = 0; i < nrLocuri; i ++)
            if(this->locuriOcupate[i] == 0)
                cout << "Locul " << i << " este liber" << endl;
            else
                cout << "Locul " << i << " nu este liber" << endl;
       cout << "Disponibilitate: " << this->disponibilitate << endl;
    }

    friend ostream& operator<<(ostream&, const SalaCinema&);



    void Citire()
    {
        cout << "Zona: ";
        cin >> this->zona;
        char nume[100];
        cout << "Nume sala: ";
        cin.get();
        cin.getline(nume, 100);
        if(this->numeSala != NULL)
            delete[] this->numeSala;
        this->numeSala = new char[strlen(nume) + 1];
        strcpy(this->numeSala, nume);
        cout << "Manager sala: ";
        cin >> this->managerSala;
        cout << "Numar locuri: ";
        cin >> this->nrLocuri;
        if(this->locuriOcupate != NULL)
            delete[] this->locuriOcupate;
        this->locuriOcupate = new int[nrLocuri];
        for(int i = 0; i < this->nrLocuri; i ++) {
            cout << "Loc ocupat: ";
            cin >> this->locuriOcupate[i];
        }
        cout << "Disponibilitate: ";
        cin >> this->disponibilitate;
    }

    friend istream& operator>>(istream &in, SalaCinema &obj);

    void setZona(char zona)
    {
        this->zona = zona;
    }
    void setNumeSala(char *numeSala)
    {
        if (this->numeSala != NULL)
            delete[] this->numeSala;
        this->numeSala = new char[strlen(numeSala) + 1];
        strcpy(this->numeSala, numeSala);
    }
    void setManagerSala(string _managerSala)
    {
        managerSala = _managerSala;
    }
    void setNrLocuri(int nrLocuri)
    {
        this->nrLocuri = nrLocuri;
    }
    void setLocuriOcupate(int *locuriOcupate)
    {
        if (this->locuriOcupate != NULL)
            delete[] this->locuriOcupate;
        this->locuriOcupate = new int[this->nrLocuri + 1];
        for (int i = 0; i < this->nrLocuri; i++)
        {
            this->locuriOcupate[i] = locuriOcupate[i];
        }
    }
    void setDisponibilitate(bool disponibilitate)
    {
        this->disponibilitate = disponibilitate;
    }
    SalaCinema(const SalaCinema& obj)
    {
        this->zona = obj.zona;
        this->numeSala = new char[strlen(obj.numeSala) + 1];
        strcpy(this->numeSala, obj.numeSala);
        this->managerSala = obj.managerSala;
        this->nrLocuri = obj.nrLocuri;
        this->locuriOcupate = new int[obj.nrLocuri + 1];
        for (int i = 0; i < obj.nrLocuri; i++)
        {
            this->locuriOcupate[i] = obj.locuriOcupate[i];
        }
        this->disponibilitate = obj.disponibilitate;
    }

    SalaCinema& operator++(){
        this -> nrLocuri++;
        int* vect = new int[this -> nrLocuri];
        for (int i = 0; i < nrLocuri - 1; i++)
            vect[i] = this -> locuriOcupate[i];
        vect[this -> nrLocuri - 1] = 0;
        if (this -> locuriOcupate != NULL)
            delete[] this -> locuriOcupate;
        this -> locuriOcupate = vect;

        return *this;
    }

    SalaCinema operator++(int){    // post
        SalaCinema copie = *this;
        // ++(*this);
        this -> nrLocuri++;
        int* vect = new int[this -> nrLocuri];
        for (int i = 0; i < nrLocuri - 1; i++)
            vect[i] = this -> locuriOcupate[i];
        vect[this -> nrLocuri - 1] = 0;
        if (this -> locuriOcupate != NULL)
            delete[] this -> locuriOcupate;
        this -> locuriOcupate = vect;

        return copie;
    }

    SalaCinema operator+(const SalaCinema &obj){
        SalaCinema copie = *this;
        copie.managerSala = copie.managerSala + " " + obj.managerSala;
        return copie;
    }

    SalaCinema operator+(string s){
        SalaCinema copie = *this;
        copie.managerSala = copie.managerSala + " " + s;
        return copie;
    }

    friend SalaCinema operator+(string s, SalaCinema obj);

    SalaCinema& operator = (const SalaCinema& obj)
    {
        if(this != &obj) {
        if (this->numeSala != NULL)
            delete[] this->numeSala;
        if (this->locuriOcupate != NULL)
            delete[] this->locuriOcupate;
        this->zona = obj.zona;
        this->numeSala = new char[strlen(obj.numeSala) + 1];
        strcpy(this->numeSala, obj.numeSala);
        this->managerSala = obj.managerSala;
        this->nrLocuri = obj.nrLocuri;
        this->locuriOcupate = new int[obj.nrLocuri + 1];
        for (int i = 0; i < obj.nrLocuri; i++)
        {
            this->locuriOcupate[i] = obj.locuriOcupate[i];
        }
        this->disponibilitate = obj.disponibilitate;
        }
        return *this;
    }
    ~SalaCinema()
    {
        if (this->numeSala != NULL)
            delete[] this->numeSala;
        if (this->locuriOcupate != NULL)
            delete[] this->locuriOcupate;
    }
};

ostream& operator<<(ostream &out, const SalaCinema &obj){
    out << "Zona: " << obj.zona << endl;
    out << "Nume sala: " << obj.numeSala << endl;
    out << "Manager sala: " << obj.managerSala << endl;
    out << "Numar locuri: " << obj.nrLocuri << endl;
    for(int i = 0; i < obj.nrLocuri; i ++)
        if(obj.locuriOcupate[i] == 0)
            out << "Locul " << i << " este liber" << endl;
        else
            out << "Locul " << i << " nu este liber" << endl;
    out << "Disponibilitate: " << obj.disponibilitate << endl;
    return out;
}

istream& operator>>(istream &in, SalaCinema &obj){
    cout << "Zona: ";
    in >> obj.zona;
    char nume[100];
    cout << "Nume sala: ";
    in.get();
    in.getline(nume, 100);
    if(obj.numeSala != NULL)
        delete[] obj.numeSala;
    obj.numeSala = new char[strlen(nume) + 1];
    strcpy(obj.numeSala, nume);
    cout << "Manager sala: ";
    in >> obj.managerSala;
    cout << "Numar locuri: ";
    in >> obj.nrLocuri;
    if(obj.locuriOcupate != NULL)
        delete[] obj.locuriOcupate;
    obj.locuriOcupate = new int[obj.nrLocuri];
    for(int i = 0; i < obj.nrLocuri; i ++) {
        cout << "Loc ocupat: ";
        in >> obj.locuriOcupate[i];
    }
    cout << "Disponibilitate: ";
    in >> obj.disponibilitate;

    return in;
}

SalaCinema operator+(string s, SalaCinema obj){
    obj.managerSala = s + " " + obj.managerSala;
    return obj;
}



int main()
{
    int *p = new int[3];
    p[0] = 1;
    p[1] = 0;
    p[2] = 1;
    char *m = new char[strlen("abc") + 1];
    strcpy(m, "abc");
    SalaCinema Sala1('c', m, "Andrei", 3, p, false);
    SalaCinema Sala2('c', m, "George", 3, p, false);
    //Sala1.Citire();
    //Sala1.Afisare();
    //cin >> Sala1;
    //cout << ++Sala1;
    //cout << Sala1++;
    cout << Sala1 + "Popescu";
    cout << Sala1;
    cout << Sala2;
    cout << "Antoniu" + Sala1;
    return 0;
}
