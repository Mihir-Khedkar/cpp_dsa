#include <iostream>

using namespace std;

int main() {
    int num;
    
    cout << "Enter number: ";
    cin >> num;
    cout << endl; 

    int rev=0;
    int rem=0;

    while (num!=0) {
        rem = num % 10; 
        num = num / 10; 
        rev = rev*10 + rem; 
    }
    cout << "Domi Reversi: " << rev << endl;
    return 0;
}