//
// Created by marius on 14/03/2017.
//

#include "Joc.h"

Joc::Joc(int a) : a(a) {
    cout<<"Constructor cu un parametru\n";
}

int Joc::getA() const {
    return a;
}
