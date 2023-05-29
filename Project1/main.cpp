#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int const a = 11;
	int arr[a]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 10; i > 0; i--) {
		arr[i] = i;
		cout << arr[i] << endl;
	}

	system("pause>nul");
	return 0;
}