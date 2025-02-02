#include "Obsluha.h"

class Zoo {
private:
    int pocetVybehu;
    Vybeh** vybehy;
    Zamestnanec** zamestnanci;

public:
    Zoo(int pocet);
    ~Zoo();

    void VytvoritVyběh(int index, int kapacita);
    void PridatZvireDoVyběhu(int index, Zvire* zvire);
    void VypisZvirataVeVyběhu(int index);
    void PridatZamestnance(int index, Zamestnanec* zamestnanec);
    void VypisZamestnance(int index);
};
