//
// Created by marius on 28/03/2017.
//

#ifndef TUTORIAT_PACIENT_H
#define TUTORIAT_PACIENT_H

#include <ostream>
#include "include.h"
#include "Data.h"

class Pacient {
    char *nume, *prenume, *adresa;
    int varsta;
    // factori de risc
    int colesterol, tensiuneArteriala;
    Data dataAnalize;
public:
    Pacient(char *nume = NULL, char *prenume = NULL, char *adresa = NULL, int varsta = 0,
            int col = 0, int tens = 0, Data = Data(0, 0, 0));
    virtual ~Pacient();
    friend std::ostream &operator<<(std::ostream &os, const Pacient &pacient);
};

#endif //TUTORIAT_PACIENT_H
