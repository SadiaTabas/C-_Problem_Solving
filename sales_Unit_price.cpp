
#include <iostream>
using namespace std;

int main() {
    int days, items;

    cout << "Enter the number of days: ";
    cin >> days;
    cout << "Enter the number of items: ";
    cin >> items;

    double unitPrice[100][100], sales[100][100];

    cout << "Enter the unit price for each item for each day:\n";
    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ": ";
        for (int j = 0; j < items; j++) {
            cin >> unitPrice[i][j];
        }
    }

    cout << "\nEnter the number of sales for each item for each day:\n";
    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ": ";
        for (int j = 0; j < items; j++) {
            cin >> sales[i][j];
        }
    }

    double totalProfit = 0;

    for (int i = 0; i < days; i++) {
        for (int j = 0; j < items; j++) {
            totalProfit += unitPrice[i][j] * sales[i][j];
        }
    }

    double averageProfit = totalProfit / days;

    cout << "\nTotal Profit for the week: " << totalProfit << endl;
    cout << "Average Profit per day: " << averageProfit << endl;

    return 0;
}
