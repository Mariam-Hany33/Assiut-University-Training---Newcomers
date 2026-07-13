#include <iostream>

using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A < B) { 
		if (B < C) {
			// A < B && B < C
			// A < B < C
			cout << A << endl;
			cout << B << endl;
			cout << C << endl;
		}
		else {  
			if (A < C) { 
				// A < B && C < B && A < C
				// A < C < B
				cout << A << endl;
				cout << C << endl;
				cout << B << endl;
			}
			else {
				// A < B && B > C && A > C
				// C < A < B 
				cout << C << endl;
				cout << A << endl;
				cout << B << endl;
			}

		}
	}
	else {
		if (C < B) {
			// B < A && c < B
			// C < B < A 
			cout << C << endl;
			cout << B << endl;
			cout << A << endl;
		}
		else { 
			if (A < C) {
				// B < A && C > B && A < C
				// B < A < C
				cout << B << endl;
				cout << A << endl;
				cout << C << endl;
			}
			else {
				// B < A && C > B && A > C 
				// A > C > B 
				// B < C< A
				cout << B << endl;
				cout << C << endl;
				cout << A << endl;
			}
		}
	}
	cout << endl;
	cout << A << endl << B << endl << C << endl; // then the values in the sequence as they were read
}
