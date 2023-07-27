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

    int totalPrint = (2*n-1) * (2*n-1);

    // n=3
    n=3;
    for(int row=0; row < 2*n-1; row++) {
        for(int col=0; col<2*n-1; col++) {

            for(int caseNumber=0; caseNumber<n; caseNumber++) {
                if(row==0+col || row==2*n-2-col || col==0+col || col==2*n-2-col ) cout << n-col << space;
            }

            // how to generate runtime if conditions
            // if(row==0 || row==2*n-2 || col==0 || col==2*n-2 ) cout << n << space;
            // else if(row==1 || row==2*n-3 || col==1 || col==2*n-3 ) cout << n-1 << space;
            // else cout << n-2 << space;
        }
        cout << endl;
    }

}