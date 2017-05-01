#include "Casa.h"
#include <iostream>

Casa::Casa()
{
        suprafataCurte = 0;
        nrEtaje = 0;
        SuprafataEtaje = 0;
}

Casa::~Casa()
{
    //dtor
}
Casa::Casa(int x,int y, float z)
{

    suprafataCurte = x;
    nrEtaje = y;
    SuprafataEtaje = z;
}
Casa::Casa(const Casa& x)
{
    Locuinta::operator=(x);
    suprafataCurte = x.suprafataCurte;
    nrEtaje = x.nrEtaje;
    SuprafataEtaje = x.SuprafataEtaje;

}
int Casa::setSupCurte(int x)
{
    suprafataCurte = x;
    return 0;
}
int Casa::getSupCurte()
{
    return suprafataCurte;
}
int Casa::setNrEtaje(int x)
{
    nrEtaje = x;
    return 0;
}
int Casa::getNrEtaje()
{
     return nrEtaje;
}
int Casa::setSuprafataEtaje(float x)
{
    SuprafataEtaje = x;
    return 0;
}
float Casa::getSuprafataEtaje()
{
    return SuprafataEtaje;
}
Casa& Casa::operator=(const Casa& x)
{
    Locuinta::operator=(x);
    suprafataCurte = x.suprafataCurte;
    nrEtaje = x.nrEtaje;
    SuprafataEtaje = x.SuprafataEtaje;
    return *this;
}
int Casa::Afisare()
{
    //if(this->getNumeClient()!=NULL)
      //  Locuinta:Afisare();
    std::cout << suprafataCurte << " " << nrEtaje << " " << SuprafataEtaje << " ";
    return 0;
}

double Casa::CalculChirie(int X,int Y)
{
    return X * (this->getSuprUtila() + 0.2 * suprafataCurte) * (1 - Y * this->getDiscount()/100.0);
}
