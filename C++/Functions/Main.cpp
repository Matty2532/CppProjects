#include <iostream>

using namespace std;

void printSomething();

int main(){
	printSomething();

	cout << "Press enter to continue...";
	cin.get();
	return 0;
}

void printSomething(){
	cout << "I am text on the screen" << endl;
}