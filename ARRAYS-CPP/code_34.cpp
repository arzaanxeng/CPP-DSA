/*
Given a sorted and rotated array arr[] of distinct elements, find the index of given key in the array. 
If the key is not present in the array, return -1.

Examples:  

Input: arr[] = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 3
Output: 8
Explanation: 3 is present at index 8.

Input: arr[] = [3, 4, 5, 1, 2], key = 6
Output: -1
Explanation: 6 is not present.

Input: arr[] = [33, 42, 72, 99], key = 42
Output: 1
Explanation: 42 is found at index 1.

*/
#include<iostream>
using namespace std;

int search(int arr[] , int n , int k ){
    int l = 0 , r = n-1 ;

    while( l <= r){
        int m = l + (r-l)/2;

        if(arr[m] == k){
            cout<<m;
            break;
        }

        // LEFT SORTED ARRAY
        if(arr[m] > l){
            if( (arr[l] <= k) && (arr[m] > k)){
                r = m-1;
            }
            else l = m+1;
        }

        // RIGHT SORTED ARRAY
        if(arr[m] < l){
            if( (arr[m] < k) && (arr[r] >= k) ){
                l = m+1;
            }
            else l = m-1;
        }
    }
return -1;
}

int main(void){
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key ;
    cout<<"Enter the element u would like to search :";
    cin>>key;
    search(arr , n , key);
    return 0;
}
