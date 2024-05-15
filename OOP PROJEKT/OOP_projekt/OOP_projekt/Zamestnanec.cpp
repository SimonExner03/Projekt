#include "Zamestnanec.h"

Zamestnanec::Zamestnanec(string jm, string r) : jmeno(jm), role(r) {}

string Zamestnanec::GetJmeno() {
    return jmeno;
}

string Zamestnanec::GetRole() {
    return role;
}