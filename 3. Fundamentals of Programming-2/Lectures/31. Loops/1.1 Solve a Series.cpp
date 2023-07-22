#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        i%2==0 ? sum-=i : sum+= i;
    }
    cout << sum << endl;

    return 0;
}