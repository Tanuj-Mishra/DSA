#include<iostream>
using namespace std;

int main() {

   
   // Q-1
//    int a,b;
//    cout << "Enter two numbers: ";
//    cin >> a >> b;

    
//    a>b ? cout << "first number " << a << " is the largest" << endl :  cout << "second number " << b << " is the largest" << endl;


    // Q-2
    // int radius;
    // cout << "Enter radius: ";
    // cin >> radius;

    // radius>2 ? cout << "Area is more" << endl : cout << "Perimeter is more" << endl; 

    // Q-3
    // int year;
    // cout << "Enter year: ";
    // cin >> year;
    // year%4 == 0 ? cout << "Leap Year\n" : cout << "Not a Leap Year\n";

    // Q-4
    // int l,b;
    // cout << "Enter length and breadth of rectangle: ";
    // cin >> l >> b;
    // int area = l*b;
    // int perimeter = 2*(l+b);

    // area>perimeter ? cout << "Area is more\n" : cout << "Perimeter is more\n";

    // Q-5
    // int a,b,c;
    // cout << "Enter sides of triangle: ";
    // cin >> a >> b >> c;

    // if(a==b && b==c && a==c) {
    //     cout << "Equilateral Triangle" << endl;
    // }
    // else if(a!=b && b!=c && a!=c) {
    //     cout << "Scalene Triangle" << endl;
    // }
    // else {
    //     cout << "Isosceles Triangle" << endl;
    // }


    // Q-6
    // int a, b, c;
    // cout << "\nEnter marks: ";
    // cin >> a >> b >> c;

    // if(a>=b && a >=c) {
    //     cout << "A is max" << endl;
    // }
    // else if(b>=a && b >=c) {
    //     cout << "B is max" << endl;
    // }
    // else {
    //     cout << "C is max" << endl;
    // }


    // Q-7
    // int x,y;
    // cout << "\nEnter x and y coordinates: ";
    // cin >> x >> y;

    // if(x!=0 && y != 0) {
    //     cout << "Point lies on x-y plane" << endl;
    // }
    // else if(x==0 && y==0) {
    //     cout << "Point lies on Origin" << endl;
    // }
    // else if(x==0) {
    //     cout << "Point lies on Y-axis" << endl;
    // }
    // else {
    //     cout << "Point lies on X-axis" << endl;
    // }
    // cout << endl;

    // Q-8
    // int x1, y1, x2, y2, x3, y3;
    // cout << "\nEnter coordinates of first point: ";
    // cin >> x1 >> y1;
    // cout << "Enter coordinates of second point: ";
    // cin >> x2 >> y2;
    // cout << "Enter coordinates of third point: ";
    // cin >> x3 >> y3;

    // int a = (((y2-y1)/(x2-x1)) * x3) + ((x2*y1 - x1*y2)/(x2-x1));
    // y3 == a ? cout << "\nThey lie on one line\n" : cout << "They dont lie on one line\n";

    // Q-9
    // char ch;
    // cout << "Enter any character: ";
    // cin >> ch;

    // if(ch>='0' && ch <= '9') {
    //     cout << "It is a digit" << endl;
    // }
    // else if((ch>='a' && ch <= 'z') || (ch>='A' && ch <= 'Z')) {
    //     cout << "It is an alphabet" << endl;
    // }
    // else {
    //     cout << "It is a special character" << endl;
    // }
    // cout << endl;

    // Q-10
    // op -> value of b and c are respectively 300 and 200


    // Q-1
    int rupees;
    cout << "Enter rupees: ";
    cin >> rupees;
    int numberOfNotes;

    switch(rupees>0) {
        case rupees>2000 :
            numberOfNotes = rupees/2000;
            cout << "Number of 2000 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*2000;
            break; 
        case rupees>500 :
            numberOfNotes = rupees/500;
            cout << "Number of 500 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*500;
            break; 
        case rupees>200 :
            numberOfNotes = rupees/200;
            cout << "Number of 200 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*200;
            break; 
        case rupees>100 :
            numberOfNotes = rupees/100;
            cout << "Number of 100 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*100;
            break; 
        case rupees>50 :
            numberOfNotes = rupees/50;
            cout << "Number of 50 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*50;
            break; 
        case rupees>20 :
            numberOfNotes = rupees/20;
            cout << "Number of 20 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*20;
            break; 
        case rupees>10 :
            numberOfNotes = rupees/10;
            cout << "Number of 10 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*10;
            break; 
        case rupees>5 :
            numberOfNotes = rupees/5;
            cout << "Number of 5 coins: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*5;
            break; 
        case rupees>2 :
            numberOfNotes = rupees/2;
            cout << "Number of 2 coins: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*2;
            break; 
        case rupees>1 :
            numberOfNotes = rupees/1;
            cout << "Number of 1 coins: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*1;
            break; 
        default:
            cout << "Invalid Input" << endl;
    }
    cout << endl;


    // Q-4
    // First character 1
    // Second character 1

    // Q-5
    // Value of t: 0

    // Q-6
    // N


    // Q-1
    // cout << endl;
    // for(int i = 1; i<=100; i+=2) {
    //     cout << i << "\t";
    // }
    // cout << endl << endl;

    // Q-2
    // cout << endl;
    // for(int i = 3; i<=100; i+=3) {
    //     cout << i << "\t";
    // }
    // cout << endl << endl;

    
    // Q-3
    // int n;
    // cout << "\nEnter value of n: ";
    // cin >> n;

    // for(int i = 1; i<= 10; i++) {
    //     cout << n << "*" << i << "= " << n*i << endl;
    // }
    // cout << endl;

    // Q-4
    // int n;
    // cout << "\nEnter value of n: ";
    // cin >> n;
    // int term = 4;

    // for(int i = 1; i<= n; i++, term+=3) {
    //     cout << term << endl;
    // }
    // cout << endl;

    // Q-5
    // int n;
    // cout << "\nEnter value of n: ";
    // cin >> n;
    // int term = 3;

    // for(int i = 1; i<= n; i++, term*=4) {
    //     cout << term << endl;
    // }
    // cout << endl;


    // Q-6
    // char ch = 'a';
    // while(ch != 'z'+1) {
    //     cout << ch << "->" << (int)ch << endl;
    //     ch++;
    // }
    // cout << endl;

    return 0;
}