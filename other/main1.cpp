#include <iostream>

class A {
public:
    ~A() {
        throw 42.0;
    }
};

//class C { public: std::ostream &operator<<(std::ostream &o) { o<<"? "; return o; } };

int main(int argc, const char *argv[]) {
    try {
        try {
            A a;
            throw 32;   // atentie!
        }   // ce exceptie trebuie tratata mai intai? raspuns: ??? rezultat: crapa programul
        catch(int a) {
            std::cout << a;
        }
    }
    catch(double e) {
        std::cout << e;
    }
    //C cc, dd;
    //dd.operator<<(cc.operator<<(std::cout))<<" :)";
    return 0;
}
