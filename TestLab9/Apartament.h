#ifndef APARTAMENT_H
#define APARTAMENT_H
#include "Locuinta.h"

class Apartament: public Locuinta
{
    public:
        Apartament();
        ~Apartament();
        Apartament(int x);
        int getEtaj();
        int setEtaj(int x);
        int Afisare();
        double CalculChirie(int X, int Y);
    protected:
    private:
        int etaj;
};

#endif // APARTAMENT_H
