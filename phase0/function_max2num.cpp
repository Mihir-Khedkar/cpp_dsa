#include <iostream>

using namespace std;

void maxDigits(int num1, int num2) {
    if (num1 > num2){
        cout << num1 << '>' << num2 << endl;
    }
    else {
        cout << num2 << '>' << num1 << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << endl;
    maxDigits(a,b);
    return 0;
}