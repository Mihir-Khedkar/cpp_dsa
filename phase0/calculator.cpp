#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;

    int a, b;
    cout << "Choose operand: +, - , *, /" << endl;
    cin >> c;

    cout << "Choose numbers" << endl;
    cin >> a >> b;

    switch(c) {
        case '+':
            cout << a + b << endl;
            return 0;    
        case '-':
            cout << a - b << endl;
            return 0;
        case '*':
            cout << a * b << endl;
            return 0;
        case '/':
            if (b == 0) {
                cout << "cannot divide by zero" << endl;
            }
            else {
                float div;
                div = (float)a/(float)b;
                cout << div << endl;
            }
            return 0;

        default:
            cout << "Ill operator chosen!" << endl;
    }
    return 0;
}