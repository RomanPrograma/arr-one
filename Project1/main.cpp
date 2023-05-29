#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

int main() {

    int a, max_a = 0, min_a = numeric_limits<int>::max();
    const int b = 12;
    int arr[b + 1];
    arr[0] = 1;
    for (int k = 0; k <= b; k++) {
        arr[k] = k;
    }
    for (int i = 1; i <= b; i++) {
        cout << "Enter profit for " << arr[i] << " month: ";
        cin >> a;
        if (a > max_a) {
            max_a = a;
        }
        if (a < min_a) {
            min_a = a;
        }
    }
    cout << "Max = " << max_a << endl;
    cout << "Min = " << min_a << endl;

    system("pause>nul");
    return 0;
}