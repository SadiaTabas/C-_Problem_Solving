
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l;
    int j = h;

    while (i < j) {
        do {
            i++;
        } while (i <= h && arr[i] <= pivot);

        do {
            j--;
        } while (j >= l && arr[j] > pivot);

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quickSort(int arr[], int l, int h) {
    if (l < h) {
        int pivotIndex = partition(arr, l, h);
        quickSort(arr, l, pivotIndex);
        quickSort(arr, pivotIndex + 1, h);
    }
}

int main() {
    int a[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    printArray(a, size);

    quickSort(a, 0, size-1);

    cout << "Sorted array: ";
    printArray(a, size);

    return 0;
}
