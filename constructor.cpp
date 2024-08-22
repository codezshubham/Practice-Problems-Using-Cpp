#include <iostream>
using namespace std;

class Alpha {
    private:
        int data;
    public:
        Alpha() {
            data = 0;
            cout << "Default Constructor is Called" << endl;
        }
        Alpha(int d) {
            data = d;
            cout << "Parameterized Constructor is Called" << endl;
        }
        Alpha(const Alpha &a) {   // copy constructor
            data = a.data;
            cout << "Copy Constructor is Called" << endl;
        }

        void display() {
            cout << data << endl;
        }
};

int main() {
    Alpha a1(37);
    a1.display();
    Alpha a2(a1);  // copy constructor
    a2.display();
    Alpha a4 = a1; // copy constructor
    a4.display();
    Alpha a3;
    a3 = a1;   // assignment operator overloading
    a3.display();
    Alpha a5 = 100;
    return 0;
}
