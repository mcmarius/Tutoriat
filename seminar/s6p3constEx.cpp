#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

class pers
{
 const int cnp;
 char nume[10];
static int nrp;
public:
pers(int k, char * n=NULL):cnp(k)
    {if (n)strcpy(nume,n); 
     else nume[0]='\0';
	 nrp++;}
	 ~pers(){nrp--;}
	 
int get_cnp() const {return cnp;} // nu pot modifica datele obiectului apelat
void set_nume(char *n){strcpy(nume,n);}
const char * get_nume()const {return nume;} // pt a nu modifica numele 

};
int pers::nrp=0; // se poate da si alta valoare
int main()
{pers *vp[2];
/* daca ar fi pers vp[10] ar trebui apelat constructorul pentru toate obiectele la declarare 
-se creaza toate odata nu doar cate sunt necesare*/
 int nr,c;
 char n[10];
 cin>>nr;
for(int i=0;i<nr;i++)
{cin>>c>>n;
vp[i]=new pers(c,n);
}
return 0;
}




