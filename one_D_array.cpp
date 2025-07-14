#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int maxElement = arr[0];
    int minElement = arr[0];
    int sum = arr[0];
    int duplicateCount = 0;


    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
        if (arr[i] < minElement)
            minElement = arr[i];

        sum += arr[i];
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break;
            }
        }
    }

    double average = (double)sum / n;

    cout << "\nMaximum Element: " << maxElement << endl;
    cout << "Minimum Element: " << minElement << endl;
    cout << "Sum of Elements: " << sum << endl;
    cout << "Average of Elements: " << average << endl;
    cout << "Total Duplicate Elements: " << duplicateCount << endl;

    return 0;
}
