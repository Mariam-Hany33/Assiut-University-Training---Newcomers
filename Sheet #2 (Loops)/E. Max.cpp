#include <iostream>

using namespace std;
int main() {
	int t;
	int max = 0;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		if (N > max)
			max = N;
	}
	cout << max << endl;
}
