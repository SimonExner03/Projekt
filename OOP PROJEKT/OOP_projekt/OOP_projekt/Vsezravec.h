#include "Zvire.h"
#include <string>

using namespace std;

class Vsezravec : public Zvire {
public:
    Vsezravec(string n, string p, int h, int v);

    void Popis() override;
};