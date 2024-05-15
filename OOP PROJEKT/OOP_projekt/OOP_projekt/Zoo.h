#include "Obsluha.h"

class Zoo {
private:
    int pocetVybehu;
    Vybeh** vybehy;
    Zamestnanec** zamestnanci;

public:
    Zoo(int pocet);
    ~Zoo();

    void VytvoritVybìh(int index, int kapacita);
    void PridatZvireDoVybìhu(int index, Zvire* zvire);
    void VypisZvirataVeVybìhu(int index);
    void PridatZamestnance(int index, Zamestnanec* zamestnanec);
    void VypisZamestnance(int index);
};
