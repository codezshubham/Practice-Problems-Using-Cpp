#include <iostream>
using namespace std;
class Box;

class Printer {
public:
    void printDimensions(Box& box);
};

class Box {
private:
    double width;
    double height;
    double depth;

    public:
    Box(double w, double h, double d) : width(w), height(h), depth(d) {}
    
    // Declaring Printer as a friend class
    friend class Printer;
};

// Friend class member function accessing private members of Box
void Printer::printDimensions(Box& box) {
    cout << "Width: " << box.width << endl;
    cout << "Height: " << box.height << endl;
    cout << "Depth: " << box.depth << endl;
}

int main() {
    Box myBox(10.0, 20.0, 30.0);
    Printer myPrinter;
    
    myPrinter.printDimensions(myBox);

    return 0;
}
