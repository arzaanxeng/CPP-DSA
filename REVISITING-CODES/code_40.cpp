/*
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

Example 1:
Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int first_missing_positive( vector<int>& nums ){
    int i = 0;
    while(i < nums.size()){
    if ( nums[i] >= 1 && nums[i] <= nums.size() && nums[i] != nums[nums[i-1]]) swap(nums[i] , nums[nums[i] - 1]);
    else i++;

    for( int j = 0 ; j < nums.size() ; j++){
        if(nums[j] != j+1) return j+1;
       }
    }
    return nums.size() + 1;
}

int main(void){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int>nums(n);
    for( int i = 0 ; i < n ; i++){
        cout << "Enter the value of element " << (i + 1) << " : ";
        cin >> nums[i];
    }
    int ans =  first_missing_positive(nums);
    cout<<"The ans is : " <<ans; 
}
