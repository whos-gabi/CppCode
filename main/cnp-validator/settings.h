#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
public:
    static const int JUDET_COUNT = 42;
    static const char JUDET[][JUDET_COUNT] = {
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
    
};

static const char genderOptions[][100] = {
    "",
    "Masculin, nascut intre 1900 - 1999",
    "Feminin, nascut intre 1900 - 1999",
    "Masculin, nascut intre 1800 - 1899",
    "Feminin, nascut intre 1800 - 1899",
    "Masculin, nascut intre 2000 - 2099",
    "Feminin, nascut intre 2000 - 2099",
    "Masculin, resident",
    "Feminin, resident"};

#endif
