#include<iostream>
using namespace std;

void charrep(char c = '*', int n = 5);

main(){
    charrep();
    charrep('=');
    charrep('%', 4);
}

void charrep(char c, int n){
    for(int i=1; i<=n; i++){
        cout<<c;
    }
    cout<<endl;
}