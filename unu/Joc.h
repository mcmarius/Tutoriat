//
// Created by marius on 14/03/2017.
//

#ifndef TUTORIAT_JOC_H
#define TUTORIAT_JOC_H

#include <ostream>
#include "include.h"

class Joc {
    static int nrJocuri;
    int bani;
    friend class Admin;         // clasa prieten Admin poate accesa campurile private/protected, deci poate configura
    void setBani(int bani);     // un joc apeland (de exemplu) metoda setBani
public:
    operator int();
    Joc(Joc  const &);          // referinta const deoarece nu vrem sa modificam obiectul original
    Joc();
    Joc(int b);
    int getBani() const;        // metoda const deoarece nu modifica starea obiectului
    static int getNrJocuri();
    friend void afis();     // functie friend care poate accesa campurile private/protected
    friend std::ostream &operator<<(std::ostream &os, const Joc &joc);
    Joc& operator++();          // operator prefix
    Joc& operator++(int);       // operator sufix
    ~Joc();
};

#endif //TUTORIAT_JOC_H
