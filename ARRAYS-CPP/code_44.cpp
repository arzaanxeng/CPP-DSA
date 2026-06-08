
#include<iostream>
using namespace std;

void find_max( int arr[] , int n){

    int l = 1 , r = n-2;
    while(l<=r){
    int m = l + (r-l)/2;
    if( (arr[m] > arr[m-1]) && (arr[m] > arr[m+1])) {
        cout<<"The maximum value is at index :"<<m;
        break;
    }
    else if ((arr[m] > arr[m-1])) l = m+1;
    else r = m-1;
    }
}

int main(void){
    int arr[] = {2,3,5,6,8,9,10,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    find_max(arr , n);
}