#include <iostream>
using namespace std;

class AbstractBase {
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function

    void concreteFunction() {
        cout << "This is a concrete function in the abstract class." << endl;
    }

    virtual ~AbstractBase() {
        cout << "AbstractBase destructor" << endl;
    }
};

class Derived : public AbstractBase {
public:
    void pureVirtualFunction(){
        cout << "Implementation of pure virtual function in Derived class." << endl;
    }

    void concreteFunction() {
        cout << "This is a concrete function in the Derived class." << endl;
    }
};

int main() {
    // AbstractBase obj; // Error: Cannot instantiate abstract class
    Derived d;
    d.pureVirtualFunction();
    d.concreteFunction();

    AbstractBase* basePtr = &d;
    basePtr->pureVirtualFunction();
    basePtr->concreteFunction();

    return 0;
}
