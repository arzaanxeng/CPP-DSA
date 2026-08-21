/*
Given a sorted array of nums and an integer x, write a program to find the upper bound of x.

The upper bound of x is defined as the smallest index i such that nums[i] > x.

If no such index is found, return the size of the array.
Example 1
Input : n= 4, nums = [1,2,2,3], x = 2
Output:3
Explanation:
Index 3 is the smallest index such that arr[3] > x.
*/
#include<iostream>
using namespace std;

int upperBound(vector<int>& nums , int target){
    int l = 0 , r = nums.size() - 1 , ans = -1;

    while( l <= r ){
        int m = l + (r-l)/2;
        if(nums[m] > target){
            ans = m;
            r = m-1;
        }
        else l = m+1;
    }
    return ans;
}

int main(void){
    vector<int>v= {3,5,8,15,19,23,27,29,30,34,47,49,51};
    int target = 30;
    int ans = upperBound(v,target);
    if(ans==-1) cout<<"The element > "<<target<<" does not exist in the array !";
    else cout<<"The element > "<<target<<" exist at index "<<ans;
}