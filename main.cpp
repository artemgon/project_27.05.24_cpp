#include <iostream>
using namespace std;

void SomeFunc(int number)
{
	int sum_1 = 0, sum_2 = 0;
	sum_1 = number % 10 + number / 10 % 10 + number / 100 % 10;
	sum_2 = number / 1000 % 10 + number / 10000 % 10 + number / 100000 % 10;
	if (sum_1 == sum_2) cout << "The number is happy";
	else cout << "The number isn't happy";
	return;
}

int main() {
	SomeFunc(123123);
	return 0;
}