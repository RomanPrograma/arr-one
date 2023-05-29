#include <iostream>
using namespace std;

int main() {

	int a, k = 0, i = 1, s = 0;
	const int b = 7;
	int all[b];
	for (k; k < b; k++) {
		all[k] = k;
	}
	for (i; i < b; i++) {
		cout << "Enter profit for " << all[i] << " month: ";
		cin >> a;
		s += a;
	}
	cout << "profit for 6 months = " << s << endl;

	;
	return 0;
}