#include "Obsluha.h"

Obsluha::Obsluha(string jm, string r, string vb) : Zamestnanec(jm, r), vybeh(vb) {}

void Obsluha::ZmenVybeh(string vb) {
    vybeh = vb;
}

void Obsluha::PracovniPopis() {
    cout << "Jsem obsluha vybehu: " << vybeh << "." << endl;
}