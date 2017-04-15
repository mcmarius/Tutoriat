#include <iostream>
#include <cstring>

using namespace std;

class Referinta
{
protected:
    char *titlu;
public:
    Referinta() { cout<<"Introduceti titlul: "; char s[50]; cin>>s; titlu=new char[strlen(s)+1]; strcpy(titlu, s); }
    virtual ~Referinta()=0;
    virtual void print(ostream& o) const{o<<titlu<<". ";}
    friend ostream& operator<<(ostream&o, const Referinta&r) { r.print(o); return o; }
};

Referinta::~Referinta(){
    cout<<"d r\n";
    delete[] titlu;
}

class ReferintaTiparita : public Referinta
{
protected:
    char **prenume, **nume, *numePub;
    const int nrAutori, anulPublicarii;
public:
    ReferintaTiparita(const int nr, const int an) : nrAutori(nr), anulPublicarii(an)
    {
        char s[50], n[50], p[50];
        cout<<"Introduceti numele publicatiei: ";
        cin>>s;
        numePub=new char[strlen(s)+1];
        strcpy(numePub, s);
        prenume=new char*[nr];
        nume=new char*[nr];
        cout<<"Introduceti datele autorilor\n";
        for(int i=0; i<nr; i++)
        {
            cout<<"Introduceti numele: ";
            cin>>n;
            nume[i]=new char[strlen(n)+1];
            strcpy(nume[i], n);
            cout<<"Introduceti prenumele: ";
            cin>>p;
            prenume[i]=new char[strlen(p)+1];
            strcpy(prenume[i], p);
        }
    }
    void print(ostream& o) const{
    //friend ostream& operator<<(ostream& o, ReferintaTiparita &rt) {
        //Referinta &r=rt;
        //const Referinta &r=*this;
        for(int i=0; i<nrAutori-1; i++)
        //for(int i=0; i<rt.nrAutori-1; i++)
            //o<<rt.nume[i]<<", "<<rt.prenume[i]<<", ";
            o<<nume[i]<<", "<<prenume[i]<<", ";
        //o<<rt.nume[rt.nrAutori-1]<<", "<<rt.prenume[rt.nrAutori-1]<<": ";
        o<<nume[nrAutori-1]<<", "<<prenume[nrAutori-1]<<": ";
        Referinta::print(o);
        //o<<r;
        //o<<rt.numePub;
        o<<numePub<<", ";
        //return o;
    }
    virtual ~ReferintaTiparita()=0;
};

ReferintaTiparita::~ReferintaTiparita()
{
    cout<<"d t\n";
    delete[] numePub;
    for(int i=0; i<nrAutori; i++)
    {
        delete[] prenume[i];
        delete[] nume[i];
    }
    delete[] prenume;
    delete[] nume;
}

class ReferintaArticol : public ReferintaTiparita
{
    const int nrRevista, nrPagRevista1, nrPagRevista2;
public:
    ReferintaArticol(const int nr, const int an, const int n2, const int pag1, const int pag2) : ReferintaTiparita(nr, an), nrRevista(n2), nrPagRevista1(pag1), nrPagRevista2(pag2)
    {}
    ~ReferintaArticol(){
        cout<<"d a\n";}
    void print(ostream& o) const
    //friend ostream& operator<<(ostream& o, ReferintaArticol& a)
    {
        //ReferintaTiparita &rt=a;
        ReferintaTiparita::print(o);
        //o<<rt;
        //o<<a.anulPublicarii<<", "<<a.nrRevista<<", "<<a.nrPagRevista1<<"-"<<a.nrPagRevista2<<"\n";
        o<<anulPublicarii<<", "<<nrRevista<<", "<<nrPagRevista1<<"-"<<nrPagRevista2<<"\n";
        //return o;
    }
};

class ReferintaCarte : public ReferintaTiparita
{
    char* orasEditura;
public:
    ReferintaCarte(const int nr, const int an) : ReferintaTiparita(nr, an)
    {
        char s[50];
        cout<<"Introduceti orasul editurii: ";
        cin>>s;
        orasEditura=new char[strlen(s)+1];
        strcpy(orasEditura, s);
    }
    ~ReferintaCarte()
    {
        cout<<"d c\n";
        delete[] orasEditura;
    }
    void print(ostream& o)const
    //friend ostream&operator<<(ostream &o, ReferintaCarte& rc)
    {
        //ReferintaTiparita&rt=rc;
        ReferintaTiparita::print(o);
        //o<<rt;
        //o<<rc.orasEditura<<", "<<rc.anulPublicarii<<"\n";
        o<<orasEditura<<", "<<anulPublicarii<<"\n";
        //return o;
    }
};

class ReferintaWeb : public Referinta
{
    char *url, *numeProprietar;
    int zi, luna, an;
public:
    ReferintaWeb(int z, int l, int a)
    {
        zi=z; luna=l; an=a;
        char s[50], n[50];
        cout<<"Introduceti url: ";
        cin>>s;
        url=new char[strlen(s)+1];
        strcpy(url, s);
        cout<<"Introduceti nume proprietar: ";
        cin>>n;
        numeProprietar=new char[strlen(n)+1];
        strcpy(numeProprietar, n);
    }
    ~ReferintaWeb()
    {
        cout<<"d w\n";
        delete[] url;
        delete[] numeProprietar;
    }
    void print(ostream& o)const
    //friend ostream&operator<<(ostream &o, ReferintaWeb& rw)
    {
        //o<<rw.numeProprietar<<": ";
        o<<numeProprietar<<": ";
        Referinta::print(o);
        //o<<r<<". "<<rw.url<<" (accesat "<<rw.zi<<"."<<rw.luna<<"."<<rw.an<<").\n";
        o<<url<<" (accesat "<<zi<<"."<<luna<<"."<<an<<").\n";
        //return o;
    }
};

int main()
{
    int n, nc, na, i, nra, an, nrrev, nrpag1, nrpag2, t;//, nw;
    cout<<"Introduceti nr total de referinte: ";
    cin>>n;
    Referinta **r;
    ///ReferintaTiparita **rt;
    ReferintaCarte* rc;
    ReferintaArticol* ra;
    ReferintaWeb* rw;
    r=new Referinta*[n];
    t=0;
    cout<<"Introduceti nr de articole: ";
    cin>>na;
    cout<<"Introduceti nr de carti: ";
    cin>>nc;
    ///rt=new ReferintaTiparita*[na+nc];
    for(i=0; i<na; i++)
    {
        cout<<"Introduceti anul: ";
        cin>>an;
        cout<<"Introduceti nr revistei: ";
        cin>>nrrev;
        cout<<"Introduceti nr paginilor revistei (separate prin spatiu): ";
        cin>>nrpag1>>nrpag2;
        cout<<"Introduceti nr de autori: ";
        cin>>nra;
        ra=new ReferintaArticol(nra, an, nrrev, nrpag1, nrpag2);
        r[i]=ra;
        ///rt[t++]=ra;
    }
    cout<<"Introduceti cartile\n";
    for(; i<nc+na; i++)
    {
        cout<<"Introduceti anul: ";
        cin>>an;
        cout<<"Introduceti nr de autori: ";
        cin>>nra;
        rc=new ReferintaCarte(nra, an);
        r[i]=rc;
        ///rt[t++]=rc;
    }
    cout<<"Introduceti referintele web\n";
    //cin>>nw;
    for(; i<n; i++)
    {
        cout<<"Introduceti ziua: ";
        cin>>nra;
        cout<<"Introduceti luna: ";
        cin>>nrrev;
        cout<<"Introduceti anul: ";
        cin>>an;
        rw=new ReferintaWeb(nra, nrrev, an);
        r[i]=rw;
    }
    int optiune;
    cout<<"1. Afiseaza toate referintele\n";
    cout<<"2. Afiseaza toate referintele in format tiparit dintr-un an\n";
    cout<<"3. Afiseaza toate referintele in format tiparit cu nume autor\n";
    cout<<"4. Afiseaza toate referintele in format electronic cu nume proprietar\n";
    cin>>optiune;
    switch(optiune)
    {
    case 1:
        for(i=0; i<n; i++)
            cout<<*r[i];
        break;
    default:
        break;
    }
    for(i=0; i<n; i++)
        delete r[i];
    //for(i=0; i<t; i++)
      //  delete rt[i];
    delete[] r;
    ///delete[] rt;
    return 0;
}
