 #include <iostream>
using namespace std;
 int SIZE = 10;


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
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



void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}


int main() {
    int arr[SIZE] = {10, 5, 3, 8, 6, 2, 1, 4, 7, 9};
    int choice, searchMethod, target;

    cout << "Choose Sorting Algorithm: \n";
    cout << "1. Insertion Sort\n2. Quick Sort\n3. Counting Sort\n4. Merge Sort\n";
    cin >> choice;

    switch (choice) {
        case 1: insertionSort(arr, SIZE); break;
        case 2: quickSort(arr, 0, SIZE - 1); break;
        case 3: countingSort(arr, SIZE); break;
        case 4: mergeSort(arr, 0, SIZE - 1); break;
        default: cout << "Invalid choice!\n"; return 0;
    }

    cout << "Sorted Array: ";
    printArray(arr, SIZE);

    cout << "Choose Search Method:\n";
    cout << "1. Linear Search\n2. Binary Search\n";
    cin >> searchMethod;

    cout << "Enter element to search: ";
    cin >> target;

    int result = -1;
    if (searchMethod == 1) {
        result = linearSearch(arr, SIZE, target);
    } else if (searchMethod == 2) {
        result = binarySearch(arr, 0, SIZE - 1, target);
    } else {
        cout << "Invalid search method!\n";
        return 0;
    }

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found.\n";

    return 0;
}
