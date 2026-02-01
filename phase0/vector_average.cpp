#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    cout << endl;
    vector<int> v(n);

    cout << "Enter numbers to find average: ";
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }

    int sum = 0; 
    for (int i=0; i<n; i++) {
        sum = sum + v[i];
    }

    cout << "Sum of numbers: " << sum << endl;
    float average; 

    average = (float)sum / (float)n;
    
    cout << "Average of numbers: " << average << endl; 

    return 0;
}