#include <iostream>

using namespace std;

class Yolo{
public:
	void print(){
		cout << "Hello world" << endl;
	}
};

int main(){
	Yolo yolo;
	yolo.print();

	cout << "Press enter to continue...";
	cin.get();
	return 0;
}