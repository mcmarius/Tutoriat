//
// Created by marius on 28/03/2017.
//

#ifndef TUTORIAT_FRANCEZ_H
#define TUTORIAT_FRANCEZ_H

#include "European.h"

class Francez : public European {
public:
protected:
    short IQ();
public:
    Francez();
    virtual ~Francez();
};

#endif //TUTORIAT_FRANCEZ_H
