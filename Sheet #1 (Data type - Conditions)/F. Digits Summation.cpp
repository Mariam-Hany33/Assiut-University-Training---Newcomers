#include <iostream>

using namespace std;
int main() {
	long long X, Y;
	cin >> X >> Y;
	long long M = X % 10; // Last Digit
	long long N = Y % 10; // Last Digit
	cout << N + M << endl;
}
