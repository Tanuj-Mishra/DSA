// @ 00:55:38
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

    int nsp=1;
    int nst=n-1;

    // Printing First Line
    for(int stars=0; stars<2*n-1; stars++) {
        cout << print;
    }
    cout << endl;

    // Printing Rest of Pattern
    for(int row=0; row<n-1; row++) {
        // star
        for(int stars=0; stars<nst; stars++) {
            cout << print;
        }
        // spaces
        for(int spaces=0; spaces < nsp; spaces++) {
            cout << space;
        }
        // stars-2
        for(int stars=0; stars<nst; stars++) {
            cout << print;
        }
        cout << endl;

        nsp+=2;
        nst--;
    }

    return 0;
}

/*
Aproach:-
    1. Divide this into two parts- first line and rest of pattern.
    2. First Line -> Print 2n-1 stars.
    3. Rest Pattern -> star + space + star. {Both star are identical, it will run for n-1 times}
    4. space -> 1,3,5...
    5. star -> 3,2,1... {for n = 4}
*/