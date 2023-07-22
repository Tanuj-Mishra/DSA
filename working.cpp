#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;
    int copy=n;
    int reverse = 0;

    while(copy != 0) {
        reverse = reverse*10 + copy%10; 
        copy /= 10;
    }
    cout << "Reverse: " <<reverse << endl;

    return 0;
}