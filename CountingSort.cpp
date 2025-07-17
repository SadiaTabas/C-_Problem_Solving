 #include <iostream>

using namespace std;

void countingSort(int a[], int n) {
    int maxVal = 100;
    int count[maxVal + 1] = {0};
    int output[n];
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[--count[a[i]]] = a[i];
    }
    for (int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    countingSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

