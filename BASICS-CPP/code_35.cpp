// rotate an array by kth position
#include<iostream>
#include<climits>
using namespace std;

void rotate(int arr1[] , int n , int k){
    int arr2[n];
    for(int i = 0 ; i < n ; i++){
        if( i <= k-1) arr2[i] = arr1[n -k + i];
        else if (arr2[i] = arr1[i-k]);
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr2[i]<<" ";
    }
}

int main(void){
    int k ;
    cout<<"Enter the value of rotation :";
    cin>>k;
    int arr[] = {2,5,8,-2,-2,5,-9,0,54,78,32,87,21,79};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n,k);
}
