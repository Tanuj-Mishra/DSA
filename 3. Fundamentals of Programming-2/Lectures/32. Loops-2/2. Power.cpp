// @ 02:05:00

#include<iostream>
using namespace std;

int main() {

    int n1, n2;
    cout << "Enter two numebers: ";
    cin >> n1 >> n2;
    
    // Handling 0^0
    if(n1==0 && n2==0) {
        cout << "Invalid Entry" << endl;
        return 0;
    }
    float ans=1;
    float temp=n1;

    // Handling when n2 is negative
    if(n2<0) {  
        temp=1/(float)n1;
        n2*=-1;
    }

    for(int i=1; i<=n2; i++) {
        ans*=temp;
    }
    
    cout << ans << endl;

    return 0;
}