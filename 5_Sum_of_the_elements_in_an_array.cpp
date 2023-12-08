#include <iostream>
using namespace std;
int arraySum(int arr[], int size);
int main() {
    int size;
    cout<<"Sum of the elements in an array \n\n";
    cout<<"Size of the array: ";cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout<<"Enter the element "<<i+1<<" of the array: ";cin>>arr[i];
    }
    int sum = arraySum(arr, size);
    cout<<"\n";
    cout<<"The sum of the elements is: "<<sum<<endl;
    return 0;
}
int arraySum(int arr[], int size) {
    if (size == 0)
        return 0;
    else
        return arr[size - 1] + arraySum(arr, size - 1);
}
