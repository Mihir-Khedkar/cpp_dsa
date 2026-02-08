#include <iostream>
#include <vector>

using namespace std;

void rotateRightByOne(int arr[], int size) {
    if (size <= 1) {
        return;
    }

    int last = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
    cout << "Shifted to the right by 1: ";
    for (int i=0; i<size; i++) {
        cout <<arr[i]<<" ";
    }
    
}

void rotateLeftByOne(int arr[], int size) {
    if (size <= 1) return;

    int first = arr[0];

    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;
    cout << "Shifted to the left by 1: ";
    for (int i=0; i<size; i++) {
        cout <<arr[i]<<" ";
    }
}

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

    rotateRightByOne(arr, n);
    cout << endl;
    rotateLeftByOne(arr,n);
    cout << endl;
    rotateLeftByOne(arr,n);
    cout << endl;
    return 0;
}