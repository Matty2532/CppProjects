#include <iostream>

using namespace std;

int calc(int x, int y);

int main(){
	int a;
	int b;
	cout << "Enter a number!" << endl;
	cin >> a;
	cout << "Enter another number!" << endl;
	cin >> b;
	cout << "The sum of those two numbers is " << calc(a, b) << endl;

	cin.get();
	cout << "Press enter to continue...";
	cin.get();
	return 0;
}

int calc(int x, int y){
	int answer = x + y;
	return answer;
}