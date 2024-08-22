#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 1;
protected:
    int protectedVar = 2;
public:
    int publicVar = 3;

    void setProtected(int x){
        protectedVar = x;
    }

    void display() {
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        // cout << "Private: " << privateVar << endl; // Error: privateVar is private
        cout << "Protected: " << protectedVar << endl; // Accessible
        cout << "Public: " << publicVar << endl; // Accessible
    }
};

int main() {
    Base base;
    Derived derived;
    
    // base.privateVar = 10; // Error: privateVar is private
    base.setProtected(20); // Error: protectedVar is protected
    base.publicVar = 30; // Accessible
    
    base.display();
    derived.display();

    return 0;
}
