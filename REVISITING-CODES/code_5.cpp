/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 
*/

#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int nums[] = {1,2,3,4,5,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<"The actual array is : \n";
    for(int i = 0 ; i < n ; i++){
        cout<<nums[i]<<" ";
    }
    int k;
    cout<<"\nEnter the value of numbers to be rotated : ";
    cin>>k;
    k = k%n;
    vector<int>temp(n);
    for(int i = 0 ; i < n ; i++){
        if(k>i) temp[i] = nums[n-k+i];
        else temp[i] = nums[i-k];
    }

    for(int i = 0 ; i < n ; i++){
        cout<<temp[i]<<" ";
    }
}