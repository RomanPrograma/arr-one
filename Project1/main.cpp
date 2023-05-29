#include <iostream>

#include<limits>
#include<ctime>
using namespace std;

int main() {
	srand(time(NULL));
	const int a = 20;
	int arr[a + 1], end, begin;
	int n, max_num = 0, min_num = numeric_limits<int>::max();
	cout << "Enter end num: ";
	cin >> end;
	for (int i = 0; i < a; i++) {
		arr[i] = rand() % end;
		n = arr[i];
		cout << n << " ";
		if (n > max_num) {
			max_num = n;
		}
		if (n < min_num) {
			min_num = n;
		}
	}
	cout << endl << "max num = " << max_num << endl;
	cout << endl << "min num = " << min_num << endl;

	return 0;
}