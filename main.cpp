#include <iostream>
using namespace std;

void SomeFunc(int number)
{
	int stop = number;
	for (int i = 1; i < stop; i++)
	{
		number *= i;
	}
	cout << number;
	return;
}

int main() {
	SomeFunc(5);
	return 0;
}