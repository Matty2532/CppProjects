#include <iostream>

using namespace std;

int main(){
	int a;
	int b;
	int sum;

	cout << "Enter a number!" << endl;
	cin >> a;
	cout << "Enter another number!" << endl;
	cin >> b;
	sum = a + b;
	cout << "The sum of those two numbers is " << sum << endl;

	std::cin.get();
	cout << "Press enter to continue...";
	std::cin.get();
	return 0;
}