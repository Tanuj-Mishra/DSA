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

    int nsp=n-1;
    int nst=1;
    for(int row=0; row<2*n-1; row++) {
        // spaces
        for(int spaces=0; spaces < nsp; spaces++) {
            cout << space;
        }
        // star
        for(int stars=0; stars<nst; stars++) {
            cout << print;
        }
        cout << endl;

        if(row<=n/2) {
            nsp--;
            nst += 2;
        }
        else {
            nsp++;
            nst -=2;
        }
    }

    return 0;
}