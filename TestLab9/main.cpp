#include <iostream>
#include "Locuinta.h"
#include "Casa.h"
#include "Apartament.h"
#include <cstring>

using namespace std;

int main()
{
    ifstream f("input.in");
    //Locuinta L1("Gheorghe",2,2);
    //Locuinta L2;
    //f >> L2;
    //cout << (int)L2;
    //cout << '\n';
    //Casa C1(5,5,5);
    //C1.Afisare();
    Locuinta* Locuinte[100];
    char temp1[20],temp2[20];
    int k = 0;
    while(1)
    {
        f >> temp1;
        strcpy(temp2,temp1);
        if(f.eof())
            break;
        //cout << temp2 << " ";
        if(strcmp(temp2,"Casa") == 0)
        {
            Locuinte[k] = new Casa;
            f >> *(Locuinte[k]);
        }
        else
        if(strcmp(temp2,"Apartament") == 0)
        {
            Locuinte[k] = new Apartament;
            f >> *(Locuinte[k]);
        }

        k++;
    }
    // Momentan nu merge ?
    for(int i = 0 ; i < k ; i++)
      {
          cout << Locuinte[i]->getNumeClient() << " " << Locuinte[i]->getSuprUtila() << " " << Locuinte[i] ->getDiscount() << "\n";
          Locuinte[i]->Afisare();
          cout<< '\n';
     }
    return 0;
}
