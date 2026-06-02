
// Finding the index of the highest element in Mountain array
#include<iostream>
using namespace std;

void max_value_index(int arr[] , int n){

    int l = 0 , r = n-1 ;
    while( l <= r ){
        int m = l + (r-l)/2 ;

        if( (arr[m] > arr[m-1]) && (arr[m] > arr[m+1]) ){
        cout<<"The highest value elements is present on the index number :"<<m;
        break;
        }
        else if( (arr[m] > arr[m-1]) && (arr[m] < arr[m+1]) ) l = m+1;
        else r = m-1;
    }

}

int main(void){
    int arr[] = {1,2,4,6,8,10,16,12,11,7,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Time Complexity --> O(log2(N))
    max_value_index( arr , n);
}