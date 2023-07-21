#include<iostream>
using namespace std;

int main() {
    int rupees;
    cout << "Enter rupees: ";
    cin >> rupees;
    int numberOfNotes;

    switch(rupees>=2000) {
        case 1 :
            numberOfNotes = rupees/2000;
            cout << "Number of 2000 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*2000;
            break; 
    }

    switch(rupees>=500) {
        case 1 :
            numberOfNotes = rupees/500;
            cout << "Number of 500 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*500;
            break; 
    }

    switch(rupees>=200) {
        case 1 :
            numberOfNotes = rupees/200;
            cout << "Number of 200 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*200;
            break; 
    }

    switch(rupees>=100) {
        case 1 :
            numberOfNotes = rupees/100;
            cout << "Number of 100 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*100;
            break; 
    }
    switch(rupees>=50) {
        case 1 :
            numberOfNotes = rupees/50;
            cout << "Number of 50 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*50;
            break; 
    }
    switch(rupees>=20) {
        case 1 :
            numberOfNotes = rupees/20;
            cout << "Number of 20 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*20;
            break; 
    }
    switch(rupees>=10) {
        case 1 :
            numberOfNotes = rupees/10;
            cout << "Number of 10 notes: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*10;
            break; 
    }
    switch(rupees>5) {
        case 1 :
            numberOfNotes = rupees/5;
            cout << "Number of 5 coins: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*5;
            break; 
    }
    switch(rupees>=2) {
        case 1 :
            numberOfNotes = rupees/2;
            cout << "Number of 2 coins: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*2;
            break; 
    }
    switch(rupees>=1) {
        case 1 :
            numberOfNotes = rupees/1;
            cout << "Number of 1 coins: "<< numberOfNotes << endl;
            rupees -= numberOfNotes*1;
            break; 
    }

    cout << endl;

    return 0;
}