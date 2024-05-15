#include "Zvire.h"
#include <string>

using namespace std;

class Masozravec : public Zvire {
public:
    Masozravec(string n, string p, int h, int v);

    void Popis() override;
};