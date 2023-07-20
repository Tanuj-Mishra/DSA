#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "Enter an character: ";
    cin >> ch;
    
    bool isAlphabet = false;
    
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
        isAlphabet = true;
    }
   
   if(isAlphabet) {
       if(ch =='a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u' || ch =='A' || ch =='E' || ch == 'I' || ch == 'O' || ch == 'U') {
           cout << "Consonant" << endl;
       }
       else {
           cout << "Vowel" << endl;
       }
   }
   else {
       cout << "Not an Alphabet" << endl;
   }
   
    return 0;
}