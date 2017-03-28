//
// Created by marius on 28/03/2017.
//

#include "Data.h"

Data::Data(int zi, int luna, int an) : zi(zi), luna(luna), an(an) {}

int Data::getZi() const {
    return zi;
}

int Data::getLuna() const {
    return luna;
}

int Data::getAn() const {
    return an;
}
