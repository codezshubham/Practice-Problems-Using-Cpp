#include<iostream>
using namespace std;

int &retbyref(int &ref);

main(){
    int a = 10;
    int &b = retbyref(a);

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The address of b is: "<<&b<<endl;
}

int &retbyref(int &ref){
    cout<<"The value of ref is :"<<ref<<endl;
    cout<<"The address of ref is :"<<&ref<<endl;
    return ref;
}