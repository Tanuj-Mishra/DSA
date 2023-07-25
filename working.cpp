#include<iostream>
#include<string>
using namespace std;

int main() {

// Q1
/*
    int n;
    cout << "Enter n: ";
    cin >> n;

    int print;
    string space = " ";
    
    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            cout << row+1 << space;
        }
        cout << endl;
    }
*/

// Q2
/*
    int n;
    cout << "Enter n: ";
    cin >> n;

    int print;
    string space = " ";
    
    for(int row=0; row<n; row++) {
        for(int col=0; col<=n-row-1; col++) {
            cout << col+1 << space;
        }
        cout << endl;
    }
*/

// Q-4
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // int print;
    // string space = " ";
    
    // for(int row=0; row<n; row++) {
    //     for(int col=0; col<=row; col++) {
    //         row%2==0 ? cout << col+1 << space : cout << (char)('A' + col) << space;
    //     }
    //     cout << endl;
    // }

// Q-5
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // string print = "*";
    // string space = " ";
    
    // for(int row=0; row<n; row++) {
    //     for(int col=0; col<=row; col++) {
    //         cout << print << space;
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n-1; row++) {
    //     for(int col=n-row-2; col>=0; col--) {
    //         cout << print << space;
    //     }
    //     cout << endl;
    // }

// Q-6

    // int n, m;
    // cout << "Enter number of rows and columns: ";
    // cin >> n >> m;

    // for(int row=0; row<n; row++) {
    //     for(int col=0; col<m; col++) {
    //         if((row!= 0 and row != n-1) and (col!= 0 and col != m-1)) {
    //             cout << " ";
    //         }
    //         else {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }


// Q-7
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // string print = "*";
    // string space = " ";
    
    // for(int row=0; row<n; row++) {
    //     for(int col=0; col<n-row-1; col++) {
    //         cout << space;
    //     }
    //     for(int col=0; col<n; col++) {
    //         cout << print;
    //     }
    //     cout << endl;
    // }


// Q-8
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // string print = "*";
    // string space = " ";
    
    // for(int row=0; row<n; row++) {
    //     for(int col=0; col<=row; col++) {
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }


// Q-9
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // string print = "*";
    // string space = " ";
    
    // for(int row=0; row<n; row++) {

    //     for(int col=0;col<n-row-1; col++) {
    //         cout << space;
    //     }

    //     for(int col=0; col<=row; col++) {
    //         cout << (char)('A' + col);
    //     }
    //     cout << endl;
    // }

// Q-10
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // int print;
    // string space = " ";
    
    // for(int row=0; row<n; row++) {
    //     for(int col=0, print=row+1; col<=row; col++, print--) {
    //         cout << print;
    //     }
    //     cout << endl;
    // }


    // Q-11
    int n;
    cout << "Enter n: ";
    cin >> n;

    string print = "*";
    string space = " ";
    
    for(int row=0; row<n; row++) {
        // spaces
        for(int col=0;col<n-row-1;col++) {
            cout << space;
        }
        // stars
        for(int col=0; col<=row; col++) {
            cout << print;
        }
        cout << endl;
    }
    for(int row=0; row<n-1; row++) {
        // spaces
        for(int col=0; col<=row; col++) {
            cout << space;
        }
        // stars
        for(int col=n-row-2; col>=0; col--) {
            cout << print;
        }
        cout << endl;
    }

    return 0;
}