#include <iostream>
using namespace std;
int main() {
    int n, choice;


    cout << "Enter the size of 2d array: ";
    cin >> n;

    int arr[n][n];


    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "1. Main Diagonal \n";
    cout << "2. Secondary Diagonal \n";
    cout << "Enter your choice: ";
    cin >> choice;

   double sum = 0;
    double average = 0.0;

    if (choice == 1) {

        for (int i = 0; i < n; i++) {
            sum += arr[i][i];
        }
        average = sum / n;
    }
    else if (choice == 2) {

        for (int i = 0; i < n; i++) {
            sum += arr[i][n - 1 - i];
        }
        average =sum / n;
    }
    else {
        cout << "Invalid choice!\n";
        return 0;
    }


    cout << "Sum: " << sum << endl;
    cout << "Average : " << average << endl;

    return 0;
}
