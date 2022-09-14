
// TIPUL INREGISTARE( ARTICOL/ STRUCT)
// este un tip de data definit de utilizator

// SINTAXA:
// 1. 
struct <numele structului> {
tip de data_1 camp 1;
tip de data_2 camp 2;
....
tip de data_n camp n;
};
numele structului variabila;

// ex1:
struct elev_1{ 
    char nume[31];
    float media;
    long telefon;
};
elev_1 a,b,c,v[33];

// 2. 
struct{
    tip de data_1 camp 1;
    tip de data_2 camp 2;
    ...
    tip de data_n camp n;
}variabila;


// ex2: 
struct{
    char nume[31];
    float media;
    long telefon;
}a,b,c,v[33];

// 3. 
struct <nume struct_2>{
    tip de data_1 camp 1;
    tip de data_2 camp 2;
    ....
    tip de data_n camp n;
};

struct <nume struct_1>{
    nume struct_2 camp 1;
    tip de data_2 camp 2;
    ...
    tip de data_n camp n;
};
nume struct_1 variabila;

//ex3: 
struct varsta{
    int zi,an;
    char luna[30];
};
struct elev{
    varsta data_nast;
    char nume[31];
    float media;
    long telefon;
};
elev a,b,v[33];

// ACCESUL la o variabila de tip STRUCT:
// nume variabila.nume camp;

// ex1: 
cin>>a.nume;
cin>>a.media;
cin>>a.telefon;

// ACCESUL la o variabila de tip STRUCT ce contine
// si campuri care sunt de tip struct:
// variabila.nume_camp1.nume_camp2....nume_camp_n;

// ex3:
cin>>a.data_nast.zi;
cin>>a.data_nast.an;
cin>>a.data_nast.luna;
cin>>a.nume;
cin>>a.media;
cin>>a.telefon;


