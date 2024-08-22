#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 5 and 10: " << calc.add(5, 10) << endl;

    cout << "Sum of 5.5 and 10.5: " << calc.add(5.5, 10.5) << endl;

    cout << "Sum of 1, 2, and 3: " << calc.add(1, 2, 3) << endl;

    return 0;
}
