#include<iostream>
using namespace std;

class counter{
    private:
        int count;
    public:
        counter(){
            count = 0;
        }

    void display(){
        cout<<"The value of count is :"<<count<<endl;
    }

    counter operator++(){
        counter temp;
        temp.count = ++count;
        return temp;
    }
    counter operator++(int){
        counter temp;
        temp.count = count++;
        return temp;
    }
};

main(){
    counter c1, c2, c3, c4, c5, c6;
    c1.display();
    c2.display();

    ++c1;
    ++c2;
    ++c2;

    c3 = ++c2;
    c1.display();
    c2.display();
    c3.display();

    c4++;
    c5++;
    c5++;
    c6 = c5++;
    c4.display();
    c5.display();
    c6.display();
}