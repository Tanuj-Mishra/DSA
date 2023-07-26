#include<iostream>
#include<string>
using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    bool print = 1;
    string space = " ";
    
    for(int row=0; row<n; row++) {
        row%2==1 ? print=1 : print=0;
        for(int col=0; col<=row; col++, print=!print) {
            cout << print << space;
        }
        cout << endl;
    }

    return 0;
}