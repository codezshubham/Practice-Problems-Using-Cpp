#include<iostream>
using namespace std;
class B;
class A{
    private:
        int val1;
        friend void swap(A &, B &);
    public:
        void setdata(int a){
            val1 = a;
        }
        void display(){
            cout<<val1<<endl;
        }
};

class B{
    private:
        int val2;
    public:
        void setdata(int a){
            val2 = a;
        }
        void display(){
            cout<<val2<<endl;
        }
        friend void swap(A &, B &);
};

void swap(A &x, B &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    A c1;
    B c2;
    c1.setdata(4);
    c2.setdata(5);

    c1.display();
    c2.display();

    swap(c1, c2);

    c1.display();
    c2.display();
    return 0;
}