#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the number whose digits you want to count: " ;
    cin >>  num;
    cout << "" << endl; 
    
    int count = 0; 

    if (num < 0) {
        num = -num ;
    }

    while(num != 0) {
        num = num / 10;
        count++ ;
    }

    cout << "The number of digits: " << count << endl;
    return 0;
}