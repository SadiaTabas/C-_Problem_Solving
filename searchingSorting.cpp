#include <iostream>
using namespace std;


int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}


void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


 int binarySearch(int arr[], int l, int h, int key) {
    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}


int main() {
    int size, choice, key;


    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];


    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    cout << "Choose search method:\n";
    cout << "1. Linear Search\n2. Binary Search\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the element to search: ";
    cin >> key;

    int result = -1;

    if (choice == 1) {

        result = linearSearch(arr, size, key);
    }
    else if (choice == 2) {

        insertionSort(arr, size);


        result = binarySearch(arr, 0, size - 1, key);
    }
    else {
        cout << "Invalid choice!\n";
        return 0;
    }


    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!\n";

    return 0;
}
