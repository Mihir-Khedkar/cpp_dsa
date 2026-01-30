#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << endl; 
    int ori_number = num;
    int rem=0;
    int rev=0;

    while (num !=0) {
        rem = num%10;
        num = num/10;
        rev = rev*10 + rem;
    }
    cout << "Domi Reversi: " << rev << endl;
    if (ori_number == rev) {
        cout << "Is a palindrome" << endl;
    }
    else {
        cout << "Number is not a palindrome" << endl;
    }
}