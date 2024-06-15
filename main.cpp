#include <iostream>
using namespace std;

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	cout << Max(3, 9);
	return 0;
}