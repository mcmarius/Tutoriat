//
// Created by marius on 28/03/2017.
//

#include "Pacient.h"

Pacient::Pacient(char *nume, char *prenume, char *adresa, int varsta, int col, int tens, Data dataAnalize)
: dataAnalize(dataAnalize) {
    int lNume=strlen(nume)+1;
    int lPrenume=strlen(prenume)+1;
    int lAdresa=strlen(adresa)+1;
    this->nume = new char[lNume];
    this->prenume = new char[lPrenume];
    this->adresa = new char[lAdresa];
    strcpy(this->nume, nume);
    strcpy(this->prenume, prenume);
    strcpy(this->adresa, adresa);

    this->varsta = varsta;
    colesterol = col;
    tensiuneArteriala = tens;
}

Pacient::~Pacient() {
    delete nume;
    delete prenume;
    delete adresa;
}

std::ostream &operator<<(std::ostream &os, const Pacient &pacient) {
    os << "nume: " << pacient.nume << " prenume: " << pacient.prenume << " adresa: " << pacient.adresa << " varsta: "
       << pacient.varsta << " colesterol: " << pacient.colesterol << " tensiuneArteriala: "
       << pacient.tensiuneArteriala;
    return os;
}
