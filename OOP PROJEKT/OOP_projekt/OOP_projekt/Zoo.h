#include "Obsluha.h"

class Zoo {
private:
    int pocetVybehu;
    Vybeh** vybehy;
    Zamestnanec** zamestnanci;

public:
    Zoo(int pocet);
    ~Zoo();

    void VytvoritVyb�h(int index, int kapacita);
    void PridatZvireDoVyb�hu(int index, Zvire* zvire);
    void VypisZvirataVeVyb�hu(int index);
    void PridatZamestnance(int index, Zamestnanec* zamestnanec);
    void VypisZamestnance(int index);
};
