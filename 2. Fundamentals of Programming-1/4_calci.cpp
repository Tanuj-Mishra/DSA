#include<iostream>
using namespace std;

int main() {

    int a,b;
    char ch;
    cout << "Expected Format: 2+3" << endl;
    cout << "Enter Problem Statement: ";
    cin >> a >> ch >> b;

    switch(ch) {
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a/b << endl;
            break;
        default:
            cout << "Invalid operator used" << endl;
    }

    return 0;
}
// here as soon as characeter is entered after integer, then variable for input changes, 2+3 -> 2(integer), +(addition), 3(integer)