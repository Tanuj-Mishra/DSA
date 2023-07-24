#include<iostream>
using namespace std;

int main() {

    // 1. Infinite Loop

    // 2.
    // Done in class

    // 3. 
/* 
    In For Loop
    In For Loop
    In For Loop
*/

    // 4.
    /*
    9   1
    8   2
    7   3
    6   4
    5   5
    4   6
    */

    // 5.
    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // int ans=0;
    // while(n!=0) {
    //     int lastDigit = n%10;
    //     if(lastDigit%2==0) ans+=lastDigit;
    //     n/=10;
    // }
    // cout << ans << endl;

    // 6.
    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // int copy=n;

    // int reverse=0;
    // while(copy!=0) {
    //     reverse = reverse*10 + copy%10;
    //     copy/=10;
    // }
    // cout << (reverse+n) << endl;


    // 7.
    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // int ans=1;
    // if(n == 0) {
    //     cout << 1 << endl;
    //     return 0;
    // }

    // for(int i = 1; i<=n; i++) {
    //     ans*=i;
    //     cout << i << "! = " <<ans << endl;
    // }

    // 8.
    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // int a=1, b=1, c;
    // for(int i =1; i <=n; i++) {
    //     cout << i << "-> " << a << endl;
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }

    // 9.
    int n;
    cout << "Enter number: ";
    cin >> n;
    int copy=n;

    int ans=0;
    while(copy!=0) {
        int lastDigit=copy%10;
        ans+= lastDigit*lastDigit*lastDigit;
        copy/=10;
    }
    ans==n ? cout << "Yes\n" : cout << "No\n";



    return 0;
}