#include "include.h"
#include "Joc.h"

int main() {
    Joc joc(5);
    // Joc jocGratuit; // eroare, nu a mai fost generat constructorul implicit (default), fără parametri
    Joc jocPiratat(joc);    // dar a fost generat un constructor de copiere implicit
    cout<<"Am reusit sa piratam jocul si sa-i obtinem informatia: "<<jocPiratat.getA()<<"\n";
    return 0;
}