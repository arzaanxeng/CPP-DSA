// insertion sort 
#include<iostream>
#include<algorithm> 
using namespace std;

void insertion_sort(int arr[] , int n){
    int temp[1];
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j> 0 ; j--){
            if(arr[j] < arr[j-1]  ){
               swap(arr[j] , arr[j-1]);
            }
            else break;
        }
    }
      for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
      }
}

int main(void){
    int arr[] = {2,5,8,-2,-2,5,-9,0,54,78,32,87,21,79};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);

}
