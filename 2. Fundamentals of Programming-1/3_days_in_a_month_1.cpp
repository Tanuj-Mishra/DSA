#include <iostream>
using namespace std;

int main() {

    int day;
    cout << "Enter day number: ";
    cin >> day;

    // 1 3 5 7 8 10 12 -> 31 days
    // 4 6 9 11        -> 31 days
    // 2               -> 28 days

    switch(day) {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thrusday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid Number entered";
    }

    return 0;
}