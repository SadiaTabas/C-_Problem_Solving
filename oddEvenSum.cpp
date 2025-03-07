#include <iostream>
using namespace std;

void calculateSum(int arr[], int n, int &oddSum, int &evenSum) {
    oddSum = 0;
    evenSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
}

int main() {
    int n, oddSum, evenSum;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    calculateSum(arr, n, oddSum, evenSum);

    cout << "The sum of odd numbers is: " << oddSum << endl;
    cout << "The sum of even numbers is: " << evenSum << endl;

    return 0;
}

