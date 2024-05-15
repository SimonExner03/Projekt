#include "Bylozravec.h"
#include "Zvire.h"
#include <iostream>
#include <string>
using namespace std;

Bylozravec::Bylozravec(string n, string p, int h, int v) : Zvire(n, p, h, v) {}

void Bylozravec::Popis() {
    cout << "Jsem bylozravec." << endl;
    cout << "Nazev: " << GetNazev() << ", Hmotnost: " << GetHmotnost() << ", Vyska: " << GetVyska() << ", Pohlavi: " << GetPohlavi() << endl;
}
