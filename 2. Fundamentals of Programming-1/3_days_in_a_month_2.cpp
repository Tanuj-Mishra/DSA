#include <iostream>
using namespace std;

int main() {

    int day;
    cout << "Enter day number: ";
    cin >> day;

    // 1 3 5 7 8 10 12 -> 31 days
    // 4 6 9 11        -> 31 days
    // 2               -> 28 days

    switch( (day<8 && day%2==1) || (day>=8 && day%2==0)) {
        case 1 :
            cout << "31 Days";
    }
    
    switch(day==4 || day==6 || day==9 || day==11) {
        case 1 :
            cout << "30 Days";
    }
    switch(day == 2) {
        case 1 :
            cout << "28 Days";
    }

    return 0;
}