#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements to read: ";
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Numbers in the Array: ";
    for (int i=0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}