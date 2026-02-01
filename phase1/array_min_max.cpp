#include <iostream>

using namespace std;

int max_number(int arrn[], int size) {
    int maximum=arrn[0];
    for (int i=0; i<size; i++) {
        if (arrn[i]>maximum) {
            maximum = arrn[i];
        }
        else {
            continue;
        }
    }
    return maximum;
}

int min_number(int arrn[], int size) {
    int minimum=arrn[0];
    for (int i=0; i<size; i++) {
        if (arrn[i]>minimum) {
            continue;
        }
        else {
            minimum = arrn[i];
        }
    }
    return minimum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << endl;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum Number: " << max_number(arr, n) << endl;
    cout << "Minimum Number: " << min_number(arr, n) << endl;   
    
    return 0;
}