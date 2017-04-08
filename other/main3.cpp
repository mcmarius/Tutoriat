#include <iostream>

class ArrayNotFound
{
private:

public:

    ArrayNotFound(int a)
    {
        std::cout<<"A"<<std::endl;
    }

    ArrayNotFound()
    {
        std::cout<<"B"<<std::endl;
    }
};


int main(int argc, const char * argv[]) {
    ArrayNotFound a(10);
    ArrayNotFound b;
    ArrayNotFound c();
    //ArrayNotFound c = ArrayNotFound();
    return 0;
}
