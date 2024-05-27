#include <iostream>
using namespace std;

int myFunction(int x) {
	int product = 1;
	for (int i = 1; i <= x; i++)
	{
		product = product * i;
	}
	return product;
}

int main() {
	int variable = myFunction(5);
	cout << variable;
	return 0;
}