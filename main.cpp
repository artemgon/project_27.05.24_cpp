#include <iostream>
using namespace std;

bool myFunction(float x) {
	if (x > 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	cout << myFunction(0);
	return 0;
}