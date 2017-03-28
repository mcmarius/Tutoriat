#include "Player.h"
#include "Admin.h"

Joc g(Joc& j) {             // functie care intoarce un obiect
    Joc c(2);
    return c;
}

class Animal {};
class Pisica : Animal {};   // exemplu de mostenire: ESTE/IS-A(N)
class Cetatean{
    Pisica pisica;          // exemplu de compunere: ARE/HAS-A(N)
};

int main() {
    cout<<Joc::getNrJocuri()<<"\n";     // accesare camp static prin numele clasei (nu avem obiecte!)
    Joc joc(5);
    Player player;      // acest jucator nu poate modifica configuratia interna a vreunui joc; el acceseaza doar
                        // interfata jocului aka metodele si campurile publice
    Admin admin;
    admin.configureaza(joc);
    cout<<joc.getBani()<<"\n";
    // Joc jocGratuit; // eroare, nu a mai fost generat constructorul implicit (default), fără parametri
    //Joc jocPiratat(joc);    // dar a fost generat un constructor de copiere implicit
    Joc k (g(joc));
    cout<<"----\n";
    cout<<(k++).getBani();      // supraincarcare k++ versus ++k
    cout<<" "<<k.getBani()<<"\n";
    int profit = k;     // se foloseste operatorul de conversie: converteste jocul k intr-un int
    cout<<"Profitul este "<<profit<<endl;
    //cout<<"Am reusit sa piratam jocul si sa-i obtinem informatia: "<<jocPiratat.getBani()<<"\n";
    return 0;
}