#include <iostream>
using namespace std;

int myFunction(int x, int y) {
	if (x > y) {
		cout << "The first number is bigger";
	}
	else {
		cout << "The second number is bigger";
	}
	return 0;
}

int main() {
	cout << myFunction(3, 10);
	return 0;
}