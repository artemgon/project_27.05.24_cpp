#include <iostream>
using namespace std;

int myFunction(int x, int y) {
	int power = 1;
	for (int i = 1; i <= y; i++)
	{
		power = power * x;
	}
	return power;
}

int main() {
	cout << myFunction(2, 5);
	return 0;
}