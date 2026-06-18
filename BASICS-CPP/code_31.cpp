#include<iostream>
using namespace std;

void SelectionSort(int arr[] , int n) {

    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) min_idx = j; 
        }
        swap(arr[i], arr[min_idx]);
    }
    for(int i = 0 ; i<n ; i++) cout<<arr[i]<<" ";
    
}


int main(void){
    int arr[] = {3,5,2,8,6,1,0,-3,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
}