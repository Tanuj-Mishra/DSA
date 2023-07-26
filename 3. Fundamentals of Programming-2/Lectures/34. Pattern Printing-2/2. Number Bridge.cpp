// @ 01:66:55
#include<iostream>
#include<string>
using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    int print = 1;
    string space = " ";

    int nsp=1;
    int npt=n-1;

    for(int numbers=0; numbers<2*n-1; numbers++, print++) {
        cout << print;
    }
    cout << endl;
    

    for(int row=0; row<n-1; row++) {
        print=1;

        // numbers-1
        for(int numbers=0; numbers<npt; numbers++, print++) {
            cout << print;
        }
        
        // spaces
        for(int spaces=0; spaces < nsp; spaces++, print++) {
            cout << space;
        }
        // numbers-2
        for(int numbers=0; numbers<npt; numbers++, print++) {
            cout << print;
        }
        cout << endl;

        nsp+=2;
        npt--;
    }

    return 0;
}