#include <iostream>

using namespace std;

int main(){
	if(5 > 3){
		cout << "5 is greater than 3" << endl;
	}
	if(1 < 3){
		cout << "1 is less than 3" << endl;
	}
	if(6 >= 3){
		cout << "6 is greater than or equal to 3" << endl;
	}
	if(1 <= 3){
		cout << "1 is smaller than or equal to 3" << endl;
	}
	if(3 == 3){
		cout << "3 is equal to 3" << endl;
	}
	if(5 != 3){
		cout << "5 is not equal to 3" << endl;
	}
	int a = 98;
	int b = 76;
	if(a > b){
		cout << a << " is greater than " << b << endl;
	}

	cout << "Press enter to continue...";
	std::cin.get();
	return 0;
}