// SELECTION, BUBBLE, AND INSERTION SORTING
#include<iostream>
using namespace std;

void selection_sort( int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        int min_index = i;
        for(int j = (i+1) ; j < n ; j++){
            if(arr[min_index] > arr[j]) min_index = j;
        }
        swap(arr[i] , arr[min_index]);
    }

    cout<<"\n\nThe sorted array through selection sort : \n";
    for(int i = 0 ; i < n ; i++){
       cout<<arr[i]<<" ";
    }
}

void bubble_sort( int arr[] , int n ){
   
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 1 ; j < n - i ; j++){
            if(arr[j-1] > arr[j]) {
                swap(arr[j-1] , arr[j]);
            }
        }
    }

    cout<<"\n\nThe sorted array through bubble sort : \n";
    for(int i = 0 ; i < n ; i++){
       cout<<arr[i]<<" ";
    }
}

void insert_sort( int arr[] , int n){
    // Start from the second element (i = 1) up to n-1
    for(int i = 1 ; i < n; i++){
        int j = i;
  
        while( j > 0 && arr[j-1] > arr[j] ){
            swap(arr[j-1] , arr[j]);
            j--; 
        }
    }

    cout<<"\n\nThe sorted array through insertion sort : \n";
    for(int i = 0 ; i < n ; i++){
       cout<<arr[i]<<" ";
    }
}

int main(void){

    int arr1[] = {1,2,5,78,65,34,59,82,35,11,23,120,99,23,100};
    int arr2[] = {1,2,5,78,65,34,59,82,35,11,23,120,99,23,100};
    int arr3[] = {1,2,5,78,65,34,59,82,35,11,23,120,99,23,100};
    int n = 15 ;
    
    selection_sort(arr1 , n);
    bubble_sort(arr2 , n);
    insert_sort(arr3 , n);

    return 0;
}