#include <iostream>
using namespace std;

int myFunction(int x) {
	return x * x * x;
}

int main() {
	cout << myFunction(3);
	return 0;
}