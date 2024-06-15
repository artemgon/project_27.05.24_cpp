#include <iostream>
using namespace std;

void myFunction(int x) {
	if (x > 0) cout << true;
	else if (x == 0) cout << "0 has been entered";
	else cout << false;
	return;
}

int main() {
	myFunction(-7);
	return 0;
}