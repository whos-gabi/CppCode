// #include "settings.h"
#include <iostream>
#include <string>

using namespace std;
/*
incluziunea metodelor de programare de tip recursivitate, divide et impera si sortari;
mesaje cat mai descriptive pentru utilizator la introducerea si afisarea datelor;
comentarii in cod ce descriu functionarea si gandirea acestuia;
citirea si afisarea datelor se poate realiza si din fisiere (in acest caz, incarcati si fisierele aferente necesare).
*/

/// [S][AA][LL][ZZ][JJ][NNN][C]

const char JUDET[][50] = {
    "",
    "Alba",
    "Arad",
    "Argeș",
    "Bacău",
    "Bihor",
    "Bistrița-Năsăud",
    "Botoșani",
    "Brașov",
    "Brăila",
    "Buzău",
    "Caraș-Severin",
    "Cluj",
    "Constanța",
    "Covasna",
    "Dâmbovița",
    "Dolj",
    "Galați",
    "Gorj",
    "Harghita",
    "Hunedoara",
    "Ialomița",
    "Iași",
    "Ilfov",
    "Maramureș",
    "Mehedinți",
    "Mureș",
    "Neamț",
    "Olt",
    "Prahova",
    "Satu Mare",
    "Sălaj",
    "Sibiu",
    "Suceava",
    "Teleorman",
    "Timiș",
    "Tulcea",
    "Vaslui",
    "Vâlcea",
    "Vrancea",
    "București",
    "București District 1",
    "București District 2",
    "București District 3",
    "București District 4",
    "București District 5",
    "București District 6",
    "București District 7",
    "București District 8",
    "Călărași",
    "Giurgiu"};

const char SEX[][70] = {
    "",
    "Masculin, nascut intre 1900 - 1999",
    "Feminin, nascut intre 1900 - 1999",
    "Masculin, nascut intre 1800 - 1899",
    "Feminin, nascut intre 1800 - 1899",
    "Masculin, nascut intre 2000 - 2099",
    "Feminin, nascut intre 2000 - 2099",
    "Masculin, resident",
    "Feminin, resident"};

long cnp;

struct CNP {
    int S;     // Sex
    string AA;     // Year of birth (last two digits)
    string LL;     // Birth month
    string ZZ;     // Birth day
    int JJ;     // County code
    string NNN;    // Unique person code within county
    int C;      // Check digit
}parsed;

CNP parse_cnp(long cnp) {
    CNP parsed;
    string cnpStr = to_string(cnp);
    parsed.S = cnp / 1000000000000;  
    parsed.AA = cnpStr.substr(1, 2); 
    parsed.LL = cnpStr.substr(3, 2); 
    parsed.ZZ = cnpStr.substr(5, 2); 
    parsed.JJ = (cnp / 10000) % 1000;
    parsed.NNN = cnpStr.substr(9, 3);
    parsed.C = cnp % 10;                    
    return parsed;
}

//recursiv
bool validare_helper(string cnpStr, int idx, int controlNum) {
    // Base case: CNP has 13 digits
    if (idx == 13) {
        int c = cnpStr[12] - '0';
        controlNum %= 11;
        if (controlNum == 10) {
            controlNum = 1;
        }
        return (controlNum == c);
    }

    // Recursive case: multiply current digit with control constant and add to control number
    int currentDigit = cnpStr[idx] - '0';
    const string controlConstant = "279146358279";
    int product = currentDigit * (controlConstant[idx] - '0');
    return validare_helper(cnpStr, idx + 1, controlNum + product);
}

bool validare(long cnp) {
    // Convert CNP to string for easier manipulation
    string cnpStr = to_string(cnp);

    // Check if CNP has 13 digits
    if (cnpStr.length() != 13) {
        return false;
    }

    // Start recursion with initial control number of 0
    return validare_helper(cnpStr, 0, 0);
}


void printCNPInfo(CNP cnp){
    //sex
    cout<<"Sexul este: "<<SEX[cnp.S]<<endl;

    //data nasterii
    cout<<"Data nasterii este: "<<cnp.ZZ<<'-'<<cnp.LL<<'-'<<cnp.AA<<endl;

    //judetul
    cout<<"Judetul este: "<<JUDET[cnp.JJ]<<endl;

    //numarul unic
    cout<<"Numarul unic este: "<<cnp.NNN<<endl;

    //cifra de control
    cout<<"Cifra de control este: "<<cnp.C<<endl;
}


int main()
{
    cout << "Introduceti CNP-ul: ";
    // cin >> cnp;
    cnp = 7040125270020;
    cout << endl;

    if (validare(cnp))
    {
        CNP parsed = parse_cnp(cnp);
        printCNPInfo(parsed);
    }
    else
    {
        cout << "CNP-ul nu este valid";
    }
    return 0;
}