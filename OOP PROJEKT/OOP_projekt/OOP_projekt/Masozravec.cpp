#include "Masozravec.h"
#include "Zvire.h"
#include <iostream>
#include <string>
Masozravec::Masozravec(string n, string p, int h, int v) : Zvire(n, p, h, v) {}

void Masozravec::Popis() {
    cout << "Jsem masozravec." << endl;
    cout << "Nazev: " << GetNazev() << ", Hmotnost: " << GetHmotnost() << ", Vyska: " << GetVyska() << ", Pohlavi: " << GetPohlavi() << endl;
}

