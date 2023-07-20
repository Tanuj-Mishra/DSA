#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    int digit = 1;
    for(int i = 1; i <= n; i++) {
        if(i != n) {
            cout << digit << ", ";
        }
        else {
            cout << digit << "." << endl;
        }
        digit += 2;
    }

    return 0;
}