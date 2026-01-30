#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Multiplication number" << endl;
    cin >> num;
    cout << "----------------------------" << endl;

    for (int i=0; i < 13; i++){
        cout << num*i << endl; 
    }
}