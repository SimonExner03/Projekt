#include "Vybeh.h"


class Zamestnanec {
protected:
    string jmeno;
    string role;

public:
    Zamestnanec(string jm, string r);

    virtual void PracovniPopis() = 0;

    string GetJmeno();
    string GetRole();
};
