#include <iostream>
#include <limits>
using namespace std;

const int MONTHS = 12;

int main() {
    double profits[MONTHS];
    double maxProfit = numeric_limits<double>::lowest();
    double minProfit = numeric_limits<double>::max();


    cout << "Enter profit (12M):" << endl;
    for (int i = 0; i < MONTHS; ++i) {
        cout << "profit for " << (i + 1) << " month: ";
        cin >> profits[i];
    }

    int startMonth, endMonth;
    cout << "Enter range: ";
    cin >> startMonth >> endMonth;

    for (int i = startMonth - 1; i < endMonth; ++i) {
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
        }
        if (profits[i] < minProfit) {
            minProfit = profits[i];
        }
    }


    cout << "Max profit:" << maxProfit << endl;
    cout << "Min profit:" << minProfit << endl;

    return 0;
}