//
// Created by marius on 28/03/2017.
//

#include "Roman.h"

Roman::~Roman() {
    //cout<<"Destructor Roman\n";
}

Roman::Roman() : European(20, 6) {      // apelam constructorul din superclasa si ii dam parametri
    //cout<<"Constructor Roman\n";
}

/*Roman::Roman(int x, int y, int z) : European(x, z) {      // situatie similara
    //cout<<"Constructor Roman cu 3 parametri\n";
}*/

short Roman::IQ() {
    return (short) (a * b);
}
