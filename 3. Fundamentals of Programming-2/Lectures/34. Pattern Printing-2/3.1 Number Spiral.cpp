#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int print1=n, print2=n, print3=n;       // actual number to be printed
    int n1=1, n2=2*n-2, n3=0;      // number of times printing loop will be executed
    string space = " ";

    // Printing first half
    for(int row=0; row<n; row++) {
        // initialising values to be printed
        print1=n;
        print3=n-row+1;

        // number-1
        for(int number=0; number<n1; number++, print1--)   cout << print1 << space;

        // number-2
        for(int number=0; number<n2; number++)   cout << print2 << space;

        // number-3
        for(int number=0; number<n3; number++, print3++)   cout << print3 << space;

        // changes for next row
        print2--;
        n1++;
        n2-=2;
        n3++;
        cout << endl;
    }

    // Printing second half
    n1=n-1;
    n2=1;
    n3=n-1;
    print2=2;
    for(int row=0; row<n-1; row++) {
        // initialising values to be printed
        print1=n;
        print3=row+2;

        // number-1
        for(int number=0; number<n1; number++, print1--)   cout << print1 << space;

        // number-2
        for(int number=0; number<n2; number++)   cout << print2 << space;

        // number-3
        for(int number=0; number<n3; number++, print3++)   cout << print3 << space;

        // changes for next row
        print2++;
        n1--;
        n2+=2;
        n3--;
        cout << endl;
    }


}