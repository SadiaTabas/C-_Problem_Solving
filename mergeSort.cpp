#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Merge(int arr[], int l, int q, int h) {
    int n1 = q - l + 1;
    int n2 = h - q;
    int L[n1 + 1], R[n2 + 1];

    for (int i = 1; i <= n1; i++) {
        L[i] = arr[l + i - 1];
    }

    for (int j = 1; j <= n2; j++) {
        R[j] = arr[q + j];
    }

    int i = 1, j = 1;
    for (int k = l; k <= h; k++) {
        if (i <= n1 && (j > n2 || L[i] <= R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}

void MergeSort(int arr[], int l, int h) {
    if (l < h) {
        int q = (l + h) / 2;
        MergeSort(arr, l, q);
        MergeSort(arr, q + 1, h);
        Merge(arr, l, q, h);
    }
}

int main() {
    int a[] = {0, 10, 16, 8, 12, 15, 6, 3, 9, 5};
    int size = sizeof(a) / sizeof(a[0]) - 1;

    cout << "Original array: ";
    printArray(a, size);

    MergeSort(a, 1, size);

    cout << "Sorted array: ";
    printArray(a, size);

    return 0;
}

