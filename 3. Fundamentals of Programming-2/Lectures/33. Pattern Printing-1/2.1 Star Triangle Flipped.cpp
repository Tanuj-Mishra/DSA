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
        for(int col=0; col<n-row-1; col++) {
            cout << space;
        }
        
        for(int col=0; col<=row; col++) {
            cout << print;
        }
        cout << endl;
    }


    return 0;
}