#ifndef CASA_H
#define CASA_H
#include "Locuinta.h"

class Casa: public Locuinta
{
    public:
        Casa();
        ~Casa();
        Casa(int ,int , float);
        Casa(const Casa&);
        int setSupCurte(int );
        int getSupCurte();
        int setNrEtaje(int );
        int getNrEtaje();
        int setSuprafataEtaje(float);
        float getSuprafataEtaje();
        Casa& operator=(const Casa&);
        int Afisare();
        double CalculChirie(int X, int Y);
    protected:
    private:
        int suprafataCurte;
        int nrEtaje;
        float SuprafataEtaje;
};

#endif // CASA_H
