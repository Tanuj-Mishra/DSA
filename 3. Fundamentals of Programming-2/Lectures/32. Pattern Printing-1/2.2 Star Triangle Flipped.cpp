#include<iostream>
#include<string>
using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    string print = "*";
    string space = " ";
    
    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            (row+col>=n-1) ? cout << print : cout << space;
        }
        cout << endl;
    }

    return 0;
}