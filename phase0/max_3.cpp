#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 3 numbers :" << endl ;
    cin >> a >> b >> c;

    cout << "Greatest number" << endl;
    
    if(a == b || b == c || c == a){
        if (a == b && b == c){
            cout << a << endl;
            return 0;
        }
        
        if (a == b && a > c){
            cout << a << endl;
            return 0;
        }
        else {
            cout << c << endl;
            return 0;
        }
        if (b == c && b > a){
            cout << b << endl;
            return 0;
        }
        else {
            cout << a << endl;
            return 0;
        }
        if (c == a && a > b){
            cout << a << endl;
            return 0;
        }
        else {
            cout << b << endl;
            return 0;
        }   
    }
    
    if(a>b){
        if(a>c){
            cout << a << endl;
        }
        else {
            cout << c << endl;
        }
    }
    else {
        if (b>c){
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }

}