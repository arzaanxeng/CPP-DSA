// Pivot Rank 
/*
Find the rank ( index ) of an element x present in an unsorted array 
*/
#include<iostream>
#include<vector>
using namespace std;

int findRank(vector<int>&nums , int x){
    int count = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        if( nums[i] < x ) count++;
    }
    return count;
}

int main(void){
    vector<int> nums = {7,5,3,0,9,2,1,5,15,2,34,23,18,56,43,29,87,54};
    int x = 15; // Must be present in the array or return -1
    int ans = findRank(nums , x);
    cout<<"The rank is : "<<ans;
}