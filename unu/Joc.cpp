//
// Created by marius on 14/03/2017.
//

#include "Joc.h"

int Joc::nrJocuri;      // variabilele statice trebuie definite in afara clasei, o singura data;
                        // pentru declarari multiple in fisiere diferite, se foloseste extern

Joc::Joc(int b) : bani(b) {
    nrJocuri++;
    cout<<"Constructor cu un parametru\n";
}

int Joc::getBani() const {
    return bani;
}

void afis() {
    cout << "Bla bla bla\n";
}

std::ostream &operator<<(std::ostream &os, const Joc &joc) {
    os << "a: " << joc.bani;
    return os;
}

Joc::Joc(Joc  const & joc) {
    this->bani = joc.bani;    // fara linia asta singur nu stie sa copieze
    cout<<"Constructor de copiere\n";
    nrJocuri++;
}

void Joc::setBani(int bani) {
    Joc::bani = bani;
}

Joc::Joc() {
    nrJocuri++;
}

Joc& Joc::operator++() {
    ++this->bani;
    return *this;
}

Joc &Joc::operator++(int) {
    Joc *j2 = new Joc(*this);
    ++this->bani;
    return *j2;
}

Joc::~Joc() {
    nrJocuri--;
}

int Joc::getNrJocuri() {
    return nrJocuri;
}

Joc::operator int() {
    return nrJocuri*bani;
}
