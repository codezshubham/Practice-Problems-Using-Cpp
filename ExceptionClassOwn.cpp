#include <iostream>
#include <exception>
#include <string>
using namespace std;
// Custom exception class inheriting from std::exception
class MyCustomException : public exception {
private:
    string errorMessage;

public:
    // Constructor to initialize the error message
    MyCustomException(const string& message){
        errorMessage = message;
    }

    // Overriding the what() function
    const char* what() const noexcept{
        return errorMessage.c_str();
    }
};

int main() {
    try {
        throw MyCustomException("This is a custom exception message!");
    } catch (MyCustomException& e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}
