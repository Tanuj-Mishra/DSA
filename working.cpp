#include<iostream>
#include<string>
using namespace std;

int main() {

// Q-7
    int n;
    cout << "Enter n: ";
    cin >> n;

    string print = "*";
    string space = " ";

    int nsp=-1;
    int nst1=n;
    int nst2=n-1;

    for(int row=0; row<n; row++) {
        if (row==1) nst2=n-1;

        // star
        for(int stars=0; stars<nst1; stars++) {
            cout << print;
        }
        // spaces
        for(int spaces=0; spaces < nsp; spaces++) {
            cout << space;
        }
        // stars-2
        for(int stars=0; stars<nst2; stars++) {
            cout << print;
        }
        cout << endl;

        nsp+=2;
        nst1--;
        nst2--;
    }

    return 0;
}