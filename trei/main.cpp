#include <iostream>
#include <list>
#include "ceva.h"

extern volatile double epsilon;

class A {
    int a;
public:
    A(int a) : a(a) {}
};
class B {
    int b;
public:
    B(int b) : b(b) {}
};

class C : public A, public B {
public:
    C() : A(5), B(6) {

    }
};

class Complex {
    double re, im;
public:
    Complex(double re, double im=0) : re(re), im(im) {}

    operator double () {
        return this->re;
    }

    Complex operator + (double d) {
        re += d;
        return *this;
    }
};

void g() {
    throw 1;
}

void f() {
    std::cout<<"in f inainte de g\n";
    g();
    std::cout<<"in f dupa de g\n";
}

class Minge {};
class MingeDeFotbal : Minge {};
class MingeDeBaschet : Minge {};
class MingeDeGolf : public Minge {};
//class MingeDeTenis : Minge {};


class Baza { public:virtual ~Baza(){}};
class Derivat : public Baza {
public:void f() {std::cout<<"\nf()\n";}
};

int main() {
    C c;    // warning: ordinea apelarii constructorilor
    Complex d(3, 2);
    std::cout<<3+d<<'\n';

    std::list<Complex> complexList;
    complexList.push_back(d);
    complexList.push_back(d);
    complexList.push_back(d);

    int const &t=5;
    std::cout<<&t<<"\n"<<epsilon;

    MingeDeGolf mingeDeGolf;
    //Minge &minge = mingeDeGolf;
    try {
        f();
        throw mingeDeGolf;
        std::cout<<"dupa throw";    // unreachable code!
    }
    catch(MingeDeBaschet& m) {

    }
    catch(MingeDeFotbal&) {

    }
    catch(Minge&) {

    }
    catch(int i) {

    }
    catch(double d) {

    }
    catch(std::exception e) {
        std::cout<<e.what()<<"\ncaz general\n";
    }
    catch(...) {
        std::cout<<"\ncaz general\n";
    }

    bool const b = (const bool) 0.5;
    std::cout.flags(std::cout.boolalpha);
    std::cout<<' '<<b;


    Derivat derivat;
    Baza &baza = derivat;
    //Baza baza;
    try {
        Derivat &der = dynamic_cast<Derivat&>(baza);
        der.f();
    }
    catch(std::exception e) {
        std::cout<<"\n"<<e.what();
    }
    return 0;
}