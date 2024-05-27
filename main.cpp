#include <iostream>
using namespace std;

int myFunction(int x){
	if ( (x % 2 == 0 || x % 3 == 0 || x % 5) && x != 2 && x != 3) {
		cout << "The number isn't prime";
	}
	else {
		cout << "The number is prime";
	}
	return 0;
}

int main() {
	cout << myFunction(10);
	return 0;
}