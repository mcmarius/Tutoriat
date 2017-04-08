//You are given library class Something as follows:

#include <string>
#include <iostream>

class Something {
public:
    Something() {
        topSecretValue = 42;
    }
public:
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};
// Implement a method to get topSecretValue for any given Something* object.
// The method should be cross-platform compatible and not depend on sizeof (int, bool, string).

class SomethingReplica {
public:
    int getTopSecretValue() { return topSecretValue; }
public:
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

int main(int argc, const char * argv[]) {
    Something a;
    SomethingReplica* b = reinterpret_cast<SomethingReplica*>(&a);
    std::cout << b->getTopSecretValue();
}
