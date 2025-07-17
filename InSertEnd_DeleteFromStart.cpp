
#include <iostream>
using namespace std;


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int insertLast(int arr[], int n, int value) {
    arr[n] = value;
    return n + 1;
}


int deleteFirst(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty! Nothing to delete." << endl;
        return n;
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}


int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    cout << "Original Array: ";
    printArray(arr, n);
    int newValue;
    cout << "Enter a value to insert at the last position: ";
    cin >> newValue;
    n = insertLast(arr, n, newValue);
    cout << "Array after insertion: ";
    printArray(arr, n);
    n = deleteFirst(arr, n);
    cout << "Array after deleting first element: ";
    printArray(arr, n);

    return 0;
}
