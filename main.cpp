#include <iostream>
using namespace std;
int sum = 0;
int SomeFunc(int start, int end)
{
	//First variant
	for (int i = start + 1; i < end; i++)
	{
		sum += i;
	}
	//Second variant
	//sum = ((start + 1) + (end - 1)) * ((end - 1) - (start+1) + 1) / 2; 
	return sum;
}

int main() {
	cout << SomeFunc(15, 30);
	return 0;
}