#include "Vsezravec.h"
#include <string>
#include "Zvire.h"
#include <iostream>


Vsezravec::Vsezravec(string n, string p, int h, int v) : Zvire(n, p, h, v) {}

void Vsezravec::Popis() {
    cout << "Jsem vsezravec." << endl;
    cout << "Nazev: " << GetNazev() << ", Hmotnost: " << GetHmotnost() << ", Vyska: " << GetVyska() << ", Pohlavi: " << GetPohlavi() << endl;
}
