#include<iostream>
#include<string>
using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    string zero = "0";
    string one = "1";
    string space = " ";
    for(int row=0; row<n; row++) {
        for(int col=0; col<=row; col++) {
            (row+col)%2==0 ? cout << one << space : cout << zero << space;
        }
        cout << endl;
    }

    return 0;
}