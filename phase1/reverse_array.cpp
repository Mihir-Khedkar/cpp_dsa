#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];

    cout << endl << "Enter numbers: ";
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int rev_arr[n];
    for (int i=n-1; i>=0; i--) {
        rev_arr[(n-1)-i] = arr[i];
    }

    cout << endl << "Reversed Array is: ";
    
    for(int i=0; i<n; i++) {
        cout << " " <<rev_arr[i];
    }

    cout << endl; 

    return 0;
}  