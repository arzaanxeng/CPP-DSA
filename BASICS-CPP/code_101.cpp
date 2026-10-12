// Count Sort 
#include<iostream>
using namespace std;

// This can be used optimally when the input numbers of the array  -k < nums[i] < k ; where k is a small number ~ 100000
int main(void){
    int nums[] = {1,2,6,4,2,7,9,8,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    int freq[10] = {0};
    for( int i = 0 ; i < n ; i++) freq[nums[i]]++;
    for( int i = 9 ; i >= 0 ; i--) for( int j = 1 ; j <= freq[i] ; j++) cout<<i<<" ";
    return 0;
}