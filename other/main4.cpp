#include<iostream>


class ArrayNotFound {
public:
    ArrayNotFound(int a) {
        std::cout<<"C";
    }
};

int main() {
    ArrayNotFound obj=5;
    obj = 10;
    return 0;
}
