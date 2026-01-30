#include <iostream>

using namespace std;

int factorial(int num) {
    int fact = 1;
    while (num != 0) {
        fact = fact*num;
        num = num-1;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter number to find factorial: ";
    cin >> num;
    cout << endl;
    cout << "Factorial Value: " << factorial(num) << endl;
}