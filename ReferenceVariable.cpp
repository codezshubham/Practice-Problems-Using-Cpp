#include<iostream>
using namespace std;

main(){
    int num;
    num = 50;
    int &b = num;

    cout<<"The value of num is :"<<num<<endl;
    cout<<"The value of b is :"<<b<<endl;

    num++;
    
    cout<<"The value of num is :"<<num<<endl;
    cout<<"The address of num is :"<<&num<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The address of b is :"<<&b<<endl;
}