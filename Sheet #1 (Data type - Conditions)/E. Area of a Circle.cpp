#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	const double pi = 3.141592653;
	float r;
	cin >> r;
	double M = pi * r * r;
	cout << fixed << setprecision(9) << M;
}
