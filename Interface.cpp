#include <iostream>
using namespace std;

// Simulating an interface in C++
class Interface {
public:
    virtual void method1() = 0; // Pure virtual function
    virtual void method2() = 0; // Pure virtual function

    virtual ~Interface() {
        cout << "Interface destructor" << endl;
    }
};

class Implementation : public Interface {
public:
    void method1(){
        cout << "Implementation of method1 in Implementation class." << endl;
    }

    void method2(){
        cout << "Implementation of method2 in Implementation class." << endl;
    }
};

int main() {
    // Interface intf; // Error: Cannot instantiate interface
    Implementation impl;
    impl.method1();
    impl.method2();

    Interface* intfPtr = &impl;
    intfPtr->method1();
    intfPtr->method2();

    return 0;
}
