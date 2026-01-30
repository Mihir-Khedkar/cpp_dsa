#include <iostream>

using namespace std;

bool checkPrime(int num) {
    if (num == 1 || num == 2) {
        return true;
    } 
    else if (num%2 == 0) {
        return false;
    }
    else {
        for (int i = 3; i*i <= num; i=i+2) {
            if (num%i == 0) {
                return false;
            }
            else {
                return true;
            }
        }
    }
    return 0;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (checkPrime(num)) {
        cout << "Number is prime" << endl;
    } 
    else {
        cout << "Number is not prime" << endl;
    }
    return 0;
}