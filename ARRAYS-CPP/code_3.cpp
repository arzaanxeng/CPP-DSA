#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int temp[n];
    int i = 0, j = n - 1;
    
    while(i < n){
        temp[i] = arr[j];
        i++;
        j--;
    }
    
    for(int k = 0; k < n; k++) {
        arr[k] = temp[k];
    }
}

int main(void){
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    for(int k = 0 ; k < n ; k++){
        cout << "Enter the value of element number " << (k + 1) << " : ";
        cin >> arr[k];
    }
    
    reverseArray(arr, n);
    
    cout << "\nReversed array: ";
    for(int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
    
    return 0;
}