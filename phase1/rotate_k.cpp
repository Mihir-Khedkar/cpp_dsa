#include <iostream>
#include <vector>

using namespace std;

void rotateRight(int arr[], int size, int k) {
    if (size <= 1) return;
    int step =k;
    k = k % size;

    while (k--) {
        int last = arr[size - 1];

        for (int i = size - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }

    cout << "Shifted to the right by " << step << ": ";
    for (int i=0; i<size; i++) {
        cout <<arr[i]<<" ";
    }
}


void rotateLeft(int arr[], int size, int k) {
    if (size <= 1) return;
    int step = k;
    k = k % size;   // handle k > size

    while (k--) {
        int first = arr[0];

        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arr[size - 1] = first;
    }
    cout << "Shifted to the left by " << step << ": ";
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

    cout << endl << "Enter shift number: ";
    int k;
    cin >> k;
    cout << endl;

    rotateRight(arr,n,k);
    cout << endl;
    rotateLeft(arr,n,k);
    cout << endl;
    rotateLeft(arr,n,k);
    cout << endl;
    return 0;
}