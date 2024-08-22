#include <iostream>
#include <cstdlib> 
using namespace std;

class MyClass {
public:
    int x;

    void* operator new(size_t size) {
        cout << "Custom new operator called. Allocating " << size << " bytes." << endl;
        void* p = malloc(size);  // Allocate memory using malloc
        if (!p) {
            throw bad_alloc();
        }
        return p;
    }

    void operator delete(void* p) {
        cout << "Custom delete operator called. Freeing memory." << endl;
        free(p);  // Free memory using free
    }
};

int main() {
    // Using the overloaded new operator
    MyClass *obj = new MyClass;
    obj->x = 42;
    cout << "Value of x: " << obj->x << endl;

    // Using the overloaded delete operator
    delete obj;

    return 0;
}
