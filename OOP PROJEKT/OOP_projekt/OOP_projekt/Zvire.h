#include <iostream>
#include <string>
using namespace std;

class Zvire {
protected:
    string nazev;
    string pohlavi;
    int hmotnost;
    int vyska;

public:
    Zvire(string n, string p, int h, int v);
    Zvire(string n, int h, int v);
    Zvire(string n);
    virtual void Popis() = 0;

    string GetNazev();
    int GetHmotnost();
    int GetVyska();
    string GetPohlavi();
};

class Vsezravec : public Zvire {
public:
    Vsezravec(string n, string p, int h, int v);
    void Popis() override;
};

class Masozravec : public Zvire {
public:
    Masozravec(string n, string p, int h, int v);
    void Popis() override;
};

class Bylozravec : public Zvire {
public:
    Bylozravec(string n, string p, int h, int v);
    void Popis() override;
};
