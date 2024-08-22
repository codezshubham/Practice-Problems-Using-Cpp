#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inch;
    public:
        void getdist(){
            cout<<"Enter the value of feet and inch"<<endl;
            cin>>feet;
            cin>>inch;
        }
        void setdist(int x, float y){
            feet = x;
            inch = y;
        }
        void showdata(){
            cout<<"The value of feet is :" <<feet<<endl;
            cout<<"The value of inch is :" <<inch<<endl;
        }
        void adddist(Distance m, Distance n);
};

inline void Distance :: adddist(Distance m, Distance n){  // default copy constructor
    inch = m.inch + n.inch;
    feet = 0;

    if(inch>=12){
        feet++;
        inch = inch - 12;
    }
    feet = feet + m.feet + n.feet;
}

main(){
    Distance d1, d2, d3;
    d1.getdist();
    d2.setdist(4, 8.5);
    d3.adddist(d1, d2);

    d1.showdata();
    d2.showdata();
    d3.showdata();
}