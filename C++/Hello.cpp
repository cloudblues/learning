#include <iostream>

using namespace std;

/*Lay down some basics in C++ */

int main () {

	cout << "Hello World" << endl;
	
	cout << "Lets count chocula" << endl;
	for(int i = 0; i < 10; i++) {
		cout << i << " ah ah" << endl;
	}
	int i = 10;
	cout << "Countdown using while loop" << endl;

	while (i >= 0)
	{
		cout << i << endl;
		i--; 
	}
	
	cout << "Boom!" << endl;

	cout << "Heres a change" << endl;
	return 0; 
}