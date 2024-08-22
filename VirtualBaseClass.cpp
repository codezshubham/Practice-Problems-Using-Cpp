#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

class Derived1 : virtual public Base {
};

class Derived2 : virtual public Base {
};

class FinalDerived : public Derived1, public Derived2 {
};

int main() {
    FinalDerived obj;
    obj.show(); // No ambiguity: single copy of Base class
    return 0;
}

/*
Virtual Base Class: Derived1 and Derived2 both virtually inherit from Base. 
This ensures that FinalDerived has only one copy of Base.

Calling the Method: When we create an object of FinalDerived and call show(), 
there is no ambiguity since there is only one copy of Base class in the hierarchy.
*/