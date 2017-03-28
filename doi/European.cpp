//
// Created by marius on 28/03/2017.
//

#include "European.h"

European::European(int a, int b) : a(a), b(b) {}

European::~European() {
    //cout<<"Destructor European\n";
}

int European::getA() const {
    return a;
}

void European::setA(int a) {
    European::a = a;
}

int European::getB() const {

    return b;
}

void European::setB(int b) {
    European::b = b;
}

European& European::operator=(const European &european) {
    this->a = european.a;
    this->b = european.b;
    return *this;
}

European::European() {
    //cout<<"Constructor European\n";
}

short European::getIQ() {
    return IQ();
}

