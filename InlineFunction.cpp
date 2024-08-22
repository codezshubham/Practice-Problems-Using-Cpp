#include<iostream>
using namespace std;

inline float lbsTokg(float pound);

main(){
    float lbs;
    cout<<"Enter the weight in pound"<<endl;
    cin>>lbs;

    lbsTokg(lbs);
    cout<<"The value of weight in kg :"<<lbsTokg(lbs)<<endl;
}
inline float lbsTokg(float pound){
    return 0.435*pound;
}