#include <iostream>
using namespace std;
int findMax(int arr[], int size);
int main() {
    int size;
    cout<<"Maximum element in an array \n\n";
    cout<<"Size of the array: ";cin>>size;
    int arr[size];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    int maxElement = findMax(arr, size);
    cout<<"The maximum element is: "<<maxElement<<endl;
    return 0;
}
int findMax(int arr[], int size) {
    if (size == 1)
        return arr[0];
    else {
        int maxRest = findMax(arr, size - 1);
        return (arr[size - 1] > maxRest) ? arr[size - 1] : maxRest;
    }
}
