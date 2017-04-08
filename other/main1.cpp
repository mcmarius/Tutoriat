#include <iostream>

class A {
public:
    A() {}
    ~A() {
        throw 42;
    }
};

//class C { public: std::ostream &operator<<(std::ostream &o) { o<<"? "; return o; } };

int main(int argc, const char * argv[]) {
    try {
        A a;
        throw 32;
    } catch(int a) {
        std::cout << a;
    }
    //C cc, dd;
    //dd.operator<<(cc.operator<<(std::cout))<<" :)";
    return 0;
}
