#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    n%2==0 ? cout << -(n/2) << endl : cout << (n-n/2) << endl;

    return 0;
}