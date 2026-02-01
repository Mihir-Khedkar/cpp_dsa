#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << endl; 

    int arr[n];
    
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << endl;
    
    unordered_map<int,int> freq;

    for (int i=0; i<n; i++) {
        freq[arr[i]]++;
    }

    for (auto p : freq) {
        cout << p.first << ":" << p.second << endl;
    }
}