#include <iostream>
using namespace std;


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void insertMiddle(int arr[], int &n, int value) {
    int mid = n / 2;
    for (int i = n; i > mid; i--) {
        arr[i] = arr[i - 1];
    }
    arr[mid] = value;
    n++; // Increase size
}


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {

    int arr[] = {10, 5, 3, 8, 6, 2, 1, 4, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    printArray(arr, n);


    int newValue;
    cout << "Enter a value to insert in the middle: ";
    cin >> newValue;
    insertMiddle(arr, n, newValue);

    cout << "Array after insertion: ";
    printArray(arr, n);


    int target;
    cout << "Enter a number to search before sorting: ";
    cin >> target;
    int index = linearSearch(arr, n, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!\n";


   insertionSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);


    cout << "Enter a number to search after sorting: ";
    cin >> target;
    index = linearSearch(arr, n, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!\n";

    return 0;
}

