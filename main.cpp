#include <iostream>
using namespace std;

int SomeFunc(int base, int exponent) {
	int key = 1;
	for (int i = 0; i < exponent; i++)
		key *= base;
	return key;
}

int main() {
	cout << SomeFunc(2, 5);
	return 0;
}