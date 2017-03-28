#include "include.h"
#include "European.h"
#include "Roman.h"
#include "Francez.h"

int main() {
    //cout<<sizeof(European)<<"\n";
    European *europeni[2];
    Roman *r = new Roman;
    Francez *f = new Francez;
    europeni[0]=r;
    europeni[1]=f;
    for(int i = 0; i < 2; ++i) {    // testam ce face "virtual"
        cout<<europeni[i]->getIQ()<<"\n";
        delete europeni[i];
    }
    /*European e(2, 3), f, g;
    //g.operator=(f.operator=(e));
    g = f = e;*/        // atribuirile sunt echivalente
    //cout<<g.getA()<<' '<<g.getB();
    return 0;
}