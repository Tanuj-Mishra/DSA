// C++ program to display "Hello World"

#include <iostream>
using namespace std;

int main() {
	float a;
	cout << "Enter a real number: ";
	cin >> a;
	cout<<"Fractional Part: ";
	if(a>0) {
		cout<<a-(int)a;
	}
	else {
		int b = a;
		b = -(b-1);
		cout<<b<<"\t"<<b+a;
	}
	cout << endl;
	return 0;
}
