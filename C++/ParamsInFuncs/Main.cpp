#include <iostream>

using namespace std;

void favNum(int x);

int main(){
	int num;
	cout << "What is your favorite number?" << endl;
	cin >> num;
	favNum(num);

	cin.get();
	cout << "Press enter to continue...";
	cin.get();
	return 0;
}

void favNum(int x){
	cout << "Your favorite number is " << x << endl;
}