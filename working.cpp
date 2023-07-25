#include<iostream>
#include<string>
using namespace std;

int main() {

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


    return 0;
}