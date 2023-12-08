#include <iostream>
using namespace std;
void merge(int arr[], int left[], int leftSize, int right[], int rightSize);
void mergeSort(int arr[], int size);
int main() {
    int size;
    cout<<"Sort algotithm \n\n";
    cout<<"Size of the array: ";cin>>size;
    int arr[size];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, size);
    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int size) {
    if (size <= 1)
        return;
    int mid = size / 2;
    int left[mid];
    int right[size - mid];
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }
    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, mid, right, size - mid);
}
