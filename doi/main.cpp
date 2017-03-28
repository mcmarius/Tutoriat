#include "include.h"
#include "European.h"
#include "Roman.h"
#include "Francez.h"

/*
#include "Joc.h"
#include "Player.h"
#include "Admin.h"

Joc g(Joc& j) {
    Joc c(2);
    return c;
}


class Animal {};
class Pisica : Animal {};
class Cetatean{
    Pisica pisica;
};
*/


int main() {
    European *europeni[2];
    Roman *r = new Roman;
    Francez *f = new Francez;
    europeni[0]=r;
    europeni[1]=f;
    for(int i = 0; i < 2; ++i) {
        cout<<europeni[i]->getIQ()<<"\n";
        delete europeni[i];
    }
    /*European e(2, 3), f, g;
    //g.operator=(f.operator=(e));
    g = f = e;*/
    //cout<<g.getA()<<' '<<g.getB();
    /*cout<<Joc::getNrJocuri();
    Joc joc(5);
    Player player;
    Admin admin;
    admin.configureaza(joc);
    cout<<joc.getBani();
    // Joc jocGratuit; // eroare, nu a mai fost generat constructorul implicit (default), fără parametri
    //Joc jocPiratat(joc);    // dar a fost generat un constructor de copiere implicit
    Joc k (g(joc));
    cout<<"----\n";
    cout<<(k++).getBani();
    cout<<" "<<k.getBani();
    int profit = k;
    cout<<"Profitul este "<<profit<<std::endl;
    //cout<<"Am reusit sa piratam jocul si sa-i obtinem informatia: "<<jocPiratat.getBani()<<"\n";
    */
    return 0;
}