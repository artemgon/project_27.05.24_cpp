#include <iostream>
using namespace std;

void SomeFunc(int x)
{
	cout << x * x * x;
	return;
}

int main() {
	SomeFunc(3);
	return 0;
}