#include "Zvire.h"
#include <string>
using namespace std;

class Bylozravec : public Zvire {
public:
    Bylozravec(string n, string p, int h, int v);

    void Popis() override;
};