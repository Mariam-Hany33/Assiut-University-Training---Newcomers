#include <iostream>

using namespace std;
int main() {
	int t, N, countEven = 0, countOdd = 0, countPos = 0, countNeg = 0;
	cin >> t;
	while (t--) {
		cin >> N;
		if (N > 0)
			countPos++;
		if (N < 0)
			countNeg++;
		if (N % 2 == 0)
			countEven++;
		if (N % 2 != 0)
			countOdd++;
	}
	cout << "Even: " << countEven << endl;
	cout << "Odd: " << countOdd << endl;
	cout << "Positive: " << countPos << endl;
	cout << "Negative: " << countNeg << endl;
}
