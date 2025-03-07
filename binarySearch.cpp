
#include <iostream>
using namespace std;


void sortting(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            arr[i] = arr[i] + arr[minIndex];
            arr[minIndex] = arr[i] - arr[minIndex];
            arr[i] = arr[i] - arr[minIndex];
        }
    }
}


int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {7, 3, 9, 1, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;


    sortting(arr, n);


    int result = binarySearch(arr, 0, n - 1, target);


    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
