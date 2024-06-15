#include <iostream>
using namespace std;

void SomeFunc(int number)
{
	if ((number % 2 == 0 || number % 3 == 0 || number % 5 == 0) && number != 2 && number != 3) cout << "No";
	else cout << "Yes";
	return;
}
int main() {
	SomeFunc(467);
	return 0;
}