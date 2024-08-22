#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inch;
    public:
        Distance(){
            feet = 0;
            inch = 0.0;
        }
        Distance(int f, float i){
            feet = f;
            inch = i;
        }
        void getdist(){
            cout<<"Enter the value of feet and inch"<<endl;
            cin>>feet>>inch;
        }
        void setdist(int x, float y){
            feet = x;
            inch = y;
        }
        void showdata(){
            cout<<"The value of feet is :"<<feet<<endl;
            cout<<"The value of inch is :"<<inch<<endl;
        }

        // Distance operator+(Distance dd){
        //     feet = feet + dd.feet;
        //     inch = inch + dd.inch;

        //     if(inch>=12){
        //         feet++;
        //         inch-=12;
        //     }
        //     return Distance(feet, inch);
        // }
        
        Distance operator+(Distance dd){
            Distance temp;
            temp.feet = feet + dd.feet;
            temp.inch = inch + dd.inch;

            if(temp.inch>=12){
                temp.feet++;
                temp.inch-=12;
            }
            return temp;
        }
        
        void operator+=(Distance dd){
            feet += dd.feet;
            inch += dd.inch;

            if(inch>=12){
                feet++;
                inch -= 12;
            }
        }

        friend Distance operator+(Distance dd, float num);

        friend Distance operator+(float num, Distance dd);

        friend ostream& operator<<(ostream &os, Distance &d);

        friend istream& operator>>(istream &is, Distance &d);
};

        Distance operator+(Distance dd, float num){
            Distance temp;
            temp.feet =  dd.feet + num;
            temp.inch =  dd.inch + num;

            if(temp.inch>=12){
                temp.feet++;
                temp.inch-=12;
            }
            return temp;
        }

        Distance operator+(float num, Distance dd){
            Distance temp;
            temp.feet = num + dd.feet;
            temp.inch = num + dd.inch;

            if(temp.inch>=12){
                temp.feet++;
                temp.inch-=12;
            }
            return temp;
        }

        ostream& operator<<(ostream &os, Distance &d) {
        os << "Feet: " << d.feet << " Inches: " << d.inch;
        return os;
        }

        istream& operator>>(istream &is, Distance &d) {
        is >> d.feet >> d.inch;
        return is;
        }

main(){
    Distance d1, d2, d3;
    cout<<"Enter distance d1"<<endl;
    cin>>d1;
    
    // d1.getdist();
    d2.setdist(8, 7.5);
    d3 = d1 + d2;
    d3.showdata();

    d3 = d2 + 10.5;
    d3.showdata();

    d3 = 10.5 + d2;
    d3.showdata();

    d3+=d2;
    d3.showdata();
}


// #include<iostream>
// using namespace std;

// class Distance {
// private:
//     int feet;
//     float inch;

// public:
//     Distance() : feet(0), inch(0.0) {}

//     Distance(int f, float i) : feet(f), inch(i) {}

//     void getdist() {
//         cout << "Enter the value of feet and inch" << endl;
//         cin >> feet >> inch;
//     }

//     void setdist(int x, float y) {
//         feet = x;
//         inch = y;
//     }

//     void showdata() const {
//         cout << "The value of feet is: " << feet << endl;
//         cout << "The value of inch is: " << inch << endl;
//     }

//     Distance operator+(const Distance& dd) const {
//         Distance temp;
//         temp.feet = feet + dd.feet;
//         temp.inch = inch + dd.inch;

//         if (temp.inch >= 12.0) {
//             temp.feet++;
//             temp.inch -= 12.0;
//         }
//         return temp;
//     }

//     friend Distance operator+(float num, const Distance& dd);

//     friend Distance operator+(const Distance& dd, float num);

//     void operator+=(const Distance& dd) {
//         feet += dd.feet;
//         inch += dd.inch;

//         if (inch >= 12.0) {
//             feet++;
//             inch -= 12.0;
//         }
//     }

//     friend ostream& operator<<(ostream& os, const Distance& d);

//     friend istream& operator>>(istream& is, Distance& d);
// };

// Distance operator+(float num, const Distance& dd) {
//     Distance temp;
//     temp.feet = num + dd.feet;
//     temp.inch = num + dd.inch;

//     if (temp.inch >= 12.0) {
//         temp.feet++;
//         temp.inch -= 12.0;
//     }
//     return temp;
// }

// Distance operator+(const Distance& dd, float num) {
//     Distance temp;
//     temp.feet = dd.feet + num;
//     temp.inch = dd.inch + num;

//     if (temp.inch >= 12.0) {
//         temp.feet++;
//         temp.inch -= 12.0;
//     }
//     return temp;
// }

// ostream& operator<<(ostream& os, const Distance& d) {
//     os << "Feet: " << d.feet << " Inches: " << d.inch;
//     return os;
// }

// istream& operator>>(istream& is, Distance& d) {
//     is >> d.feet >> d.inch;
//     return is;
// }

// int main() {
//     Distance d1, d2, d3;
//     cout << "Enter distance d1" << endl;
//     cin >> d1;

//     d2.setdist(8, 7.5);
//     d3 = d1 + d2;
//     cout << "d1 + d2: " << d3 << endl;

//     d3 += d2;
//     cout << "d3 += d2: " << d3 << endl;

//     d3 = d2 + 10.5;
//     cout << "d2 + 10.5: " << d3 << endl;

//     d3 = 10.5 + d2;
//     cout << "10.5 + d2: " << d3 << endl;

//     return 0;
// }
