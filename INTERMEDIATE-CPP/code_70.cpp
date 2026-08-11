/*
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index.
If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater
than a neighbor that is outside the array.

Example :
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/

/*
Given a sorted array of nums and an integer x, write a program to find the lower bound of x.

The lower bound algorithm finds the first and smallest index in a sorted array where the value at
that index is greater than or equal to a given key i.e. x.

If no such index is found, return the size of the array.

Example 1
Input : nums= [1,2,2,3], x = 2
Output:1
Explanation:
Index 1 is the smallest index such that arr[1] >= x.
*/

#include<iostream>
#include<vector>
using namespace std;


int main(void){
    vector<int>nums = {1,2,1,3,5,6,4};
    int n = nums.size();
    int l = 0 , r = n-1 ;
    while( l < r){ // In Case of a Peak , both the pointers will keep converging on it and in case of an equality it causes TLE !!!
        int m = l +(r-l)/2;
        if( nums[m+1] > nums[m]){
            l = m+1;
        }
        else r = m; // Not m-1 as it would break the while loop without getting to the answer 
    }
    cout<<"The peak is at the index number : "<<l;
}