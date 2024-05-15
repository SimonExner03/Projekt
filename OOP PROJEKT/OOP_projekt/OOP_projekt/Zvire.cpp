#include "Zvire.h"



Zvire::Zvire(string n, string p, int h, int v): nazev(n), pohlavi(p), hmotnost(h), vyska(v) {}
Zvire::Zvire(string n, int h, int v) : nazev(n), hmotnost(h), vyska(v) {}
Zvire::Zvire(string n) : nazev(n) {}

string Zvire::GetNazev() {
    return nazev;
}

int Zvire::GetHmotnost() {
    return hmotnost;
}

int Zvire::GetVyska() {
    return vyska;
}

string Zvire::GetPohlavi() {
    return pohlavi;
}

Vsezravec::Vsezravec(string n, string p, int h, int v): Zvire(n, p, h, v) {}

void Vsezravec::Popis() {
    cout << "Jsem vsezravec ";
    cout << "Nazev: " << GetNazev() << ", Hmotnost: " << GetHmotnost()
        << ", Vyska: " << GetVyska() << ", Pohlavi: " << GetPohlavi()
        << endl;
}

Masozravec::Masozravec(string n, string p, int h, int v): Zvire(n, p, h, v) {}

void Masozravec::Popis() {
    cout << "Jsem masozravec ";
    cout << "Nazev: " << GetNazev() << ", Hmotnost: " << GetHmotnost()
        << ", Vyska: " << GetVyska() << ", Pohlavi: " << GetPohlavi()
        << endl;
}

Bylozravec::Bylozravec(string n, string p, int h, int v): Zvire(n, p, h, v) {}

void Bylozravec::Popis() {
    cout << "Jsem bylozravec ";
    cout << "Nazev: " << GetNazev() << ", Hmotnost: " << GetHmotnost()
        << ", Vyska: " << GetVyska() << ", Pohlavi: " << GetPohlavi()
        << endl;
}