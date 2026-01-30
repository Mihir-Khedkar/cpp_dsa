#include<iostream>

using namespace std;

int main(){
    int n; 
    
    cout << "Enter the end number" << endl;
    cin >> n;

    cout << "-------------------" << endl;
    
    for(int i=0; i<n+1; i++){
        cout << i << endl;
    }
    return 0;
}