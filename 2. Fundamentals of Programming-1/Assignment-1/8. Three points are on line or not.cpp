#include<iostream>
#include<string>
using namespace std;

int main() {

    int x1, y1, x2, y2, x3, y3;
    cout << "\nEnter coordinates of first point: ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point: ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of third point: ";
    cin >> x3 >> y3;

    string m1, m2;
    if(x2==x1) {
        m1 = "Infinite Slope";
    }
    else {
        m1 = to_string((y2-y1)/(x2-x1));
    }

    if(x3==x2) {
        m2="Infinite Slope";
    }
    else {
        m2 = to_string((y3-y2)/(x3-x2));
    }
    cout << m1 << endl << m2 << endl;


    m1 == m2 ? cout << "\nThey lie on one line\n" : cout << "They dont lie on one line\n";

    return 0;
}

// Checking whether third point lies on line passing through first and second point.