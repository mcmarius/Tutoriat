#ifndef LOCUINTA_H
#define LOCUINTA_H
#include <fstream>

using namespace std;
class Locuinta
{
    public:
        Locuinta();
        virtual ~Locuinta();
        Locuinta(char s[20],int,float);
        Locuinta(char s[20],int x = 0, int y = 0);
        Locuinta(const Locuinta& );
        int setNumeClient(char s[20]);
        char* getNumeClient();
        int setSuprUtila(int x);
        int getSuprUtila();
        int setDiscount(float x);
        float getDiscount();
        Locuinta& operator=(const Locuinta& x);
        friend ifstream& operator>>(ifstream&i,Locuinta& x);
        operator int(void);
        virtual int Afisare();
        virtual double CalculChirie(int x, int y) = 0;
    protected:
    private:
        char* numeClient;
        int SuprafataUtila;
        float discount;
};

#endif // LOCUINTA_H
