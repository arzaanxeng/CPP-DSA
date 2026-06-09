
#include<iostream>
using namespace std;

int find_target(int arr[] , int n , int x){
    int l = 0 , r = n-1 ;
    while(l <= r){
        int m = l + (r-l)/2;
        if(arr[m] == x) return m;

        if(arr[r] > arr[m]){
            if(x > arr[m] && x <= arr[r]) l = m+1;
            else r = m-1;
        }

        else{
            if(x < arr[m] && x >= arr[l]) r = m-1;
            else l = m+1;
        }
    }
    return -1;
}

int main(void){
    int arr1[] = {12,13,2,3,5,6,8,9,10};
    int arr2[] = {2,3,5,6,8,9};
    int arr3[] = {12,13,14,15,16,17,18,19,1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int a = 2 , b = 9 , c = 12;

    cout<<"The target is at the index number : "<<find_target(arr1,n1,a)<<endl;
    cout<<"The target is at the index number : "<<find_target(arr2,n2,b)<<endl;
    cout<<"The target is at the index number : "<<find_target(arr3,n3,c)<<endl;
    
}