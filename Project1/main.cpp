#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
using namespace std;

int main() {
	const int N = 20;
	int arr[N + 1];
	srand(time(NULL));
	int min_e = numeric_limits<int>::lowest();
	int max_e = numeric_limits<int>::max();
	int product_min_max = 1;
	int sum_negative = 0;
	int product_paired_el = 1;
	int sum_minstart_minend = 0;
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << " ";
		if (i % 2 == 0) {
			product_paired_el *= arr[i];
		}
		if (arr[i] < 0) {
			sum_negative += arr[i];
		}
	}
	int min_i, max_i;
	for (int i = 0; i < N; i++) {
		if (arr[i] < max_e) {
			max_e = arr[i];
			max_i = i;
		}
		if (arr[i] > min_e) {
			min_e = arr[i];
			min_i = i;
		}
	}
	int startIndex = (min_i < max_i) ? min_i : max_i;
	int endIndex = (min_i > max_i) ? min_i : max_i;
	for (int i = startIndex + 1; i < endIndex; i++) {
		product_min_max *= arr[i];
	}
	for (int i = 0; i < N; i++) {
		while (arr[i] < 0) {
			sum_minstart_minend += arr[i];
			break;
		}
	}

	cout << endl << "Sum negative = " << sum_negative << endl;
	cout << "product_paired_el = " << product_paired_el << endl;
	cout << "product_min_max = " << product_min_max << endl;
	cout << "sum_minstart_minend = " << sum_minstart_minend << endl;
	cout << "min = " << min_e << " " << "max = " << max_e;


	system("pause>nul");
	return 0;
}