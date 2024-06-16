#include <iostream>
using namespace std;

void PerfNum(int number)
{
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0) sum += i;
	}
	if (sum == number) cout << number << " ";
	return;
}

void NumCheck(int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		PerfNum(i);
	}
	return;
}

int main() {
	NumCheck(1, 500);
	return 0;
}