#include "Zamestnanec.h"

using namespace std;

class Obsluha : public Zamestnanec {
private:
    string vybeh;

public:
    Obsluha(string jm, string r, string vb);

    void ZmenVybeh(string vb);
    void PracovniPopis() override;
};