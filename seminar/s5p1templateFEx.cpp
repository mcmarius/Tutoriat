#include <cstdlib>
#include <iostream>
#include<cstring>
using namespace std;
template <class T> void fs(T t){cout<<"supraincarc sablon T"<<endl;}
template <> void fs(float pf){cout<<"supraincarcare template <>"<<endl;}
void fs(float pf){cout<<"supraincarcare non-template"<<endl;}

//template <class T1,class T2> void fs(T1 p1,T2 p2){cout<<"supraincarcare T1 T2"<<endl;}
template <class T> void fs(T p1,T p2){cout<<"supraincarc sablon T T "<<endl;}
template <> void fs(int p1,int p2){cout<<"supraincarcare template <> int int"<<endl;}
void fs(int p1,int p2){cout<<"supraincarcare non-template int int"<<endl;}

/*pas 1 potrivire FARA CONVERSIE prioritate  varianta non-template, apoi template fara parametrii,
        apoi template cu 1 parametru , apoi template cu mai multi parametrii
 pas 2 daca nu se poate pas 1- conversie DOAR la varianta non-template*/

int main(int argc, char *argv[])
{ float fa=2.5;
  fs('a');// deducere T=char
  fs(2.5);//deducere T=double
  fs(fa);  //non-template pt float , prioritar fata de template<>, prioritar fata de template
  fs<>(fa); //non- template   pt float, prioritar fata de template<>, prioritar fata de template
  fs<float>(fa); // template<> cu instantiere float  prioritar fata de template general cu T=float

 fs(2,3.5);//Nu reuseste potrivire exacta nici la specializare int,int ,
 //nici la specializare <> int,int, nici la template
//face conversie la specializarea void fs(int, int)
 fs<int>(2,3.5);// deducere explicita T=int
 fs(2.5,3.5);// Prioritate cu template cu 1 parametru T fata de template cu 2 param T1 si T2 nu e ambiguitate


 system("PAUSE");
    return 0;
}
