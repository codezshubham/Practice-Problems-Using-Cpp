#include<iostream>
using namespace std;

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0;
    return avg;
}

template <class T>
void swapr(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    a = funcAverage(5,2);
    cout<<"The average of these numbers is :"<<a<<endl;
    int x=5, y=7;
    swapr(x, y);
    cout<<x<<endl<<y<<endl;
    return 0;
}
