#include<iostream>
using namespace std;

class Base{
    public:
        
        virtual void display(){
            cout<<"Display Base"<<endl;
        }

        void show(){
            cout<<"Show Base"<<endl;
        }
};

class Derived : public Base{
    public:
        void display(){
            cout<<"Display Derived"<<endl;
        }
        void show(){
            cout<<"Show Derived"<<endl;
        }
};

int main(){
    Base a;
    Derived b;
    Base *ptr;

    ptr = &a;
    ptr->display();
    ptr->show();

    ptr = &b;
    ptr->display();
    ptr->show();
    return 0;
}