#include <iostream>

using namespace std;

int main() {
	const int a = 5;
	int arr[a + 1];
	int side, P = 0;
	arr[0] = 1;
	for (int i = 1; i <= a; i++) {
		arr[i] = i;
		cout << "Enter the length " << arr[i] << " of the side of the pentagon ";
		cin >> side;
		P += side;
	}
	cout << "Perimeter of a pentagon = " << P;
	return 0;
}