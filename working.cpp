#include<iostream>
#include<string>
using namespace std;

int main() {

// Q-7
    int n;
    cout << "Enter n: ";
    cin >> n;

    int print;
    string space = " ";

    int nsp=n-1;
    int nst=1;
    
    for(int row=0; row<n; row++) {
        // spaces
        for(int col=0; col<nsp; col++) {
            cout << space;
        }
        // number
        for(int col=0, print=1; col<nst; col++) {
            cout << print << space;
            col<row ? print++ : print--;
        }
        nsp--;
        nst+=2;
        cout << endl;
    }

    return 0;
}