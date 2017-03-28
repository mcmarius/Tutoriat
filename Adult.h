//
// Created by marius on 28/03/2017.
//

#ifndef TUTORIAT_ADULT_H
#define TUTORIAT_ADULT_H

#include "Pacient.h"

class Adult : Pacient {
public:
    enum Sedentarism {
        SCAZUT, MEDIU, RIDICAT
    };
    Adult(bool fumator = false, Sedentarism sedentar = SCAZUT);
private:
    bool fumator;
    Sedentarism sedentarism;
};

#endif //TUTORIAT_ADULT_H
