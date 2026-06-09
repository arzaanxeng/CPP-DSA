
#include<iostream>
using namespace std;

void find_min(int arr[] , int n){
    int l = 0 , r = n-1 ;
    while(l < r){
        int m = l + (r-l)/2;
        if(arr[m] > arr[r]) l = m+1;
        else r = m;
    }
    cout<<"The smallest number is at index number : "<<l<<endl;
}

int main(void){
    int arr1[] = {12,13,2,3,5,6,8,9,10};
    int arr2[] = {2,3,5,6,8,9};
    int arr3[] = {12,13,14,15,16,17,18,19,1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);

    find_min(arr1,n1);
    find_min(arr2,n2);
    find_min(arr3,n3);
}