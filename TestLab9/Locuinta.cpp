#include "Locuinta.h"
#include <iostream>
#include <cstring>

Locuinta::Locuinta()
{
    //ctor
    numeClient = NULL;
    SuprafataUtila = 0;
    discount = 0.0;
}

Locuinta::~Locuinta()
{
    //dtor
    delete numeClient;
    SuprafataUtila = 0;
    discount = 0 ;
}
Locuinta::Locuinta(char s[20],int x,float y)
{
    numeClient = new char[strlen(s)+1];
    strcpy(numeClient,s);
    SuprafataUtila = x;
    discount = y;
}
Locuinta::Locuinta(const Locuinta& x)
{
    delete numeClient;
    numeClient = new char[strlen(x.numeClient)+1];
    strcpy(numeClient,x.numeClient);
    SuprafataUtila = x.SuprafataUtila;
    discount = x.discount;
}
Locuinta::Locuinta(char s[20], int x, int y)
{
    numeClient = new char[strlen(s)+1];
    strcpy(numeClient,s);
    SuprafataUtila = x;
    discount = y;
}
int Locuinta::setNumeClient(char s[20])
{
    numeClient = new char[strlen(s)+1];
    strcpy(numeClient,s);
    return 0;
}
char* Locuinta::getNumeClient()
{
    return numeClient;
}
int Locuinta::setSuprUtila(int x)
{
    SuprafataUtila = x;
    return 0;
}

int Locuinta::getSuprUtila()
{
    return SuprafataUtila;
}
int Locuinta::setDiscount(float x)
{
    discount = x;
    return 0;
}
float Locuinta::getDiscount()
{
    return discount;
}
Locuinta& Locuinta::operator=(const Locuinta& x)
{
    delete numeClient;
    numeClient = new char[strlen(x.numeClient)+1];
    strcpy(numeClient,x.numeClient);
    SuprafataUtila = x.SuprafataUtila;
    discount = x.discount;
    return *this;
}
ifstream& operator>>(ifstream& i,Locuinta& x)
{
    char s[20];
    i >> s;
    delete x.numeClient;
    x.numeClient = new char[strlen(s)+1];
    strcpy(x.numeClient,s);
    i >> x.SuprafataUtila >> x.discount;
    return i;
}
int Locuinta::Afisare()
{
    if(numeClient != NULL)
    std::cout << numeClient << " ";
    std::cout << SuprafataUtila << " " << discount;
    return 0;
}

Locuinta::operator int()
{
    return SuprafataUtila;
}
