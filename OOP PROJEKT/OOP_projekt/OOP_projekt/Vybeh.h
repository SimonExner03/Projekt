#include "Zvire.h"

class Vybeh {
private:
    int kapacita;
    Zvire** zvirata;

public:
    Vybeh(int kap);
    ~Vybeh();

    bool JePlny();
    void PridatZvire(Zvire* zvire);
    void OdebratZvire(string nazev);
    void VypisZvirat();
};