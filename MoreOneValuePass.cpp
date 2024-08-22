#include<iostream>
using namespace std;

void returnback(int a, int b, int &c, int &d);

main(){
    int i, j, k, l;
    cout<<"Enter the value of i and j"<<endl;
    cin>>i>>j;

    returnback(i, j, k, l);

    cout<<"The sum of i and j is :"<<k<<endl;
    cout<<"The difference of i and j is :"<<l<<endl;
}

void returnback(int a, int b, int &c, int &d){
    c = a + b;
    d = a - b;
}
