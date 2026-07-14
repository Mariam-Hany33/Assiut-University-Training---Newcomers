#include <iostream>

using namespace std;
int main() {
	int N;
	cin >> N;
	// الرقم الوحيد اللي مش هيكون فيه ارقام زوجية هو ال 1
	if (N == 1)
		cout << -1 << endl;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0)
			cout << i << endl;
	}
}
