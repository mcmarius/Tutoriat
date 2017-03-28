//
// Created by marius on 28/03/2017.
//

#ifndef TUTORIAT_EUROPEAN_H
#define TUTORIAT_EUROPEAN_H

#include "../include.h"

class European {
protected:
    int a, b;
    virtual short IQ(){ return 1;}
public:
    short getIQ();
    European();
    European(int a, int b);
    int getA() const;
    void setA(int a);
    int getB() const;
    void setB(int b);
    European& operator=(const European &european);

    virtual ~European();
};

#endif //TUTORIAT_EUROPEAN_H
