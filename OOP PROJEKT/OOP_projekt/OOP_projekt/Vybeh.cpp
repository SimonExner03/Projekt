#include "Vybeh.h"


using namespace std;

Vybeh::Vybeh(int kap) : kapacita(kap) {
    zvirata = new Zvire * [kapacita];
    for (int i = 0; i < kapacita; ++i) {
        zvirata[i] = nullptr;
    }
}

Vybeh::~Vybeh() {
    delete[] zvirata;
}

bool Vybeh::JePlny() {
    for (int i = 0; i < kapacita; ++i) {
        if (zvirata[i] == nullptr) {
            return false;
        }
    }
    return true;
}

void Vybeh::PridatZvire(Zvire* zvire) {
    if (!JePlny()) {
        for (int i = 0; i < kapacita; ++i) {
            if (zvirata[i] == nullptr) {
                zvirata[i] = zvire;
                cout << "Zvire pridano do vybehu." << endl;
                return;
            }
        }
    }
    else {
        cout << "Vybeh je plny." << endl;
    }
}

void Vybeh::OdebratZvire(string nazev) {
    for (int i = 0; i < kapacita; ++i) {
        if (zvirata[i] != nullptr && zvirata[i]->GetNazev() == nazev) {
            delete zvirata[i];
            zvirata[i] = nullptr;
            cout << "Zvire odebrano z vybehu." << endl;
            return;
        }
    }
    cout << "Zvire nenalezeno v vybehu." << endl;
}

void Vybeh::VypisZvirat() {
    cout << "Zvirata ve vybehu:" << endl;
    for (int i = 0; i < kapacita; ++i) {
        if (zvirata[i] != nullptr) {
            zvirata[i]->Popis();
        }
    }
}