#include <iostream>
using namespace std;

void SomeFunc(int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << " " << "*";
		}
		cout << "\n\n";
	}
	return;
}

int main() {
	SomeFunc(5, 5);
	return 0;
} 