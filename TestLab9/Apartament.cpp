#include "Apartament.h"
#include <iostream>

Apartament::Apartament():Locuinta()
{
    //ctor
    etaj = 0 ;
}
Apartament::Apartament(int x)
{
    etaj = x;
}
Apartament::~Apartament()
{
    //dtor
}
int Apartament::getEtaj()
{
    return etaj;
}
int Apartament::setEtaj(int x)
{
    etaj = x;
    return 0;
}
int Apartament::Afisare()
{
    if(this->getNumeClient()!=NULL)
        Locuinta::Afisare();
    std::cout << etaj << " ";
    return 0;
}
double Apartament::CalculChirie(int X, int Y)
{
   return X * this->getSuprUtila() * (1 - Y * this->getDiscount()/100.0);
}
