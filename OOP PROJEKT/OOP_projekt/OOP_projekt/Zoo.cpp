#include "Zoo.h"

Zoo::Zoo(int pocet) : pocetVybehu(pocet) {
    vybehy = new Vybeh * [pocetVybehu];
    zamestnanci = new Zamestnanec * [pocetVybehu];
    for (int i = 0; i < pocetVybehu; ++i) {
        vybehy[i] = nullptr;
        zamestnanci[i] = nullptr;
    }
}

Zoo::~Zoo() {
    for (int i = 0; i < pocetVybehu; ++i) {
        delete vybehy[i];
        delete zamestnanci[i];
    }
    delete[] vybehy;
    delete[] zamestnanci;
}

void Zoo::VytvoritVybìh(int index, int kapacita) {
    if (index >= 0 && index < pocetVybehu && vybehy[index] == nullptr) {
        vybehy[index] = new Vybeh(kapacita);
        cout << "Vybeh vytvoren." << endl;
    }
    else {
        cout << "Chyba pri vytvareni vybehu." << endl;
    }
}

void Zoo::PridatZvireDoVybìhu(int index, Zvire* zvire) {
    if (index >= 0 && index < pocetVybehu && vybehy[index] != nullptr) {
        vybehy[index]->PridatZvire(zvire);
    }
    else {
        cout << "Chyba pri pridavani zvirete do vybehu." << endl;
    }
}

void Zoo::VypisZvirataVeVybìhu(int index) {
    if (index >= 0 && index < pocetVybehu && vybehy[index] != nullptr) {
        vybehy[index]->VypisZvirat();
    }
    else {
        cout << "Chyba pri vypisu zvirat ve vybehu." << endl;
    }
}

void Zoo::PridatZamestnance(int index, Zamestnanec* zamestnanec) {
    if (index >= 0 && index < pocetVybehu && zamestnanci[index] == nullptr) {
        zamestnanci[index] = zamestnanec;
        cout << "Zamestnanec pridan." << endl;
    }
    else {
        cout << "Chyba pri pridavani zamestnance." << endl;
    }
}

void Zoo::VypisZamestnance(int index) {
    if (index >= 0 && index < pocetVybehu && zamestnanci[index] != nullptr) {
        cout << "Jmeno: " << zamestnanci[index]->GetJmeno() << ", Role: " << zamestnanci[index]->GetRole() << endl;
        zamestnanci[index]->PracovniPopis();
    }
    else {
        cout << "Chyba pri vypisu zamestnance." << endl;
    }
}