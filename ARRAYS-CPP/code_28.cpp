#include <iostream>
using namespace std;

void bubble_sort( int arr[] , int n ){
   
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 1 ; j < n - i ; j++){
            if(arr[j-1] > arr[j]) {
                swap(arr[j-1] , arr[j]);
            }
        }
    }

    cout<<"\n\nThe sorted array is : \n";
    for(int i = 0 ; i < n ; i++){
       cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
}

int main(void){
    int n = 9;
    int arr[] = {-3,-1,-7,0,3,6,9,11,10};// n = 9

    cout<<"The original array is : \n";
    for(int i = 0 ; i < n ; i++){
       cout<<arr[i]<<" ";
    }
    for( int i = 0 ; i < n ; i++){
        arr[i] *= arr[i];
    }
   
    bubble_sort(arr , n);
}