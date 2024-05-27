#include <iostream>
using namespace std;

void myFunction(int N, int K) {
	for (int i = 0; i < N; i++)
	{
		cout << ".";
	}
	for (int i = 0; i < K; i++)
	{
		cout << "\n.";
		for (int j = 0; j < N - 2; j++)
		{
			cout << " ";
		}
		cout << "." << endl;
	}
	for (int i = 0; i < N; i++)
	{
		cout << ".";
	}
}

int main() {
	myFunction(30, 10);
	return 0;
}