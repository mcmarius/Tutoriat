//
// Created by marius on 14/03/2017.
//

#ifndef TUTORIAT_JOC_H
#define TUTORIAT_JOC_H

#include <ostream>
#include "../include.h"

class Joc {
    static int nrJocuri;
    int bani;
    friend class Admin;
    void setBani(int bani);
public:
    operator int();
    Joc(Joc  const &);
    Joc();
    Joc(int b);
    int getBani() const;
    static int getNrJocuri();
    friend void afis();
    friend std::ostream &operator<<(std::ostream &os, const Joc &joc);
    Joc& operator++();
    Joc& operator++(int);
    ~Joc();
};

#endif //TUTORIAT_JOC_H
